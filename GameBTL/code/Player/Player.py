import pygame
import math
import sys
import os.path
import random
import math
sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from Bulletx.Explode_Bullet import Bullet
import sprites
from display import WINDOW_HEIGHT, WINDOW_WIDTH
x = WINDOW_WIDTH
y = WINDOW_HEIGHT
from Maps.ListOfMap.Map1 import map1

class Player(pygame.sprite.Sprite):
    def __init__(self, groups, pos):
        super().__init__(groups)
        self.image = pygame.Surface((x * 3 / 128, y / 24))
        self.rect = self.image.get_frect(center = pos)
        self.image.fill("black")
        #self stats
        self.health = 1000
        self.maxhealth = 1000
        self.dmg = 100
        self.lifesteal = 0

        #movement
        self.speed = x * 25 / 64
        self.vel = pygame.math.Vector2(0, 0)
        self.jump_available = False
        self.jump_vel = y * 5 / 9
        self.gravity = y * 25 / 18
        self.jump_cd = 800
        self.jump_time = 0

        #shooting
        self.ammo = 30                      #đạn hiện tại
        self.max_ammo = 30                  #băng đạn
        self.bullet_per_shoot = 1           #đạn mỗi lần bắn
        self.shoot_cd = 500                 #delay mỗi lần bắn 
        self.reload = 2500                  #nạp đạn
        self.shoot_time = 0                 #thời điểm bắn
        self.shoot_available = True         #Có thể bắn
        self.bullet_remain = 0              #Số đạn chờ để bắn
        self.burst_cd = 20                  #Thời gian ra 1 đạn mỗi lần bắn
        self.burst_time = 0                 #Thời gian bắn phát đầu
        self.homing = True                 #Bắn đạn đuổi (True, False)
        self.bullet_slow = 0                #Tỉ lệ làm chậm khi trúng đạn
    
    #move
    def move(self, dt):
        key = pygame.key.get_pressed()
        self.vel.x = (int(key[pygame.K_RIGHT]) - int(key[pygame.K_LEFT])) * self.speed
        bam_tuong = False

        #di chuyen trai phai
        self.rect.centerx += self.vel.x * dt
        for surface in map1.list_of_surface:
            for index in range(len(surface.list_of_2point) - 1):
                if self.rect.clipline(surface.list_of_2point[index], surface.list_of_2point[index + 1]):
                    self.rect.centerx -= self.vel.x * dt
                    point2 = surface.list_of_2point[index + 1]
                    point1 = surface.list_of_2point[index]
                    line = pygame.math.Vector2(point2[0] - point1[0], point2[1] - point1[1])
                    if self.vel.x * line.x < 0:
                        line *= -1

                    rect_temp = self.image.get_frect(center = (self.rect.centerx, self.rect.centery - y / 144))      
                    angle = ((pygame.math.Vector2(self.vel.x, 0).angle_to(line)) + 360) % 360
                    if not rect_temp.clipline(point1, point2):
                        #change angle
                        if self.vel.x != 0 and (angle >300 and angle < 360) or (angle < 60 and angle > 0): 
                            self.rect.center += self.vel.rotate(angle) * dt

                        #bam tuong
                        elif angle >= 270 or angle <= 90 and pygame.time.get_ticks():
                            self.jump_available = True
                            bam_tuong = True
        #va chạm với màn hình
        if self.rect.left < 0:
            self.rect.left = 0
        elif self.rect.right > x:
            self.rect.right = x
        if self.rect.top < 0:
            self.rect.top = 0
        elif self.rect.bottom > y:
            self.rect.bottom = y
        # jump
        if self.jump_available and key[pygame.K_UP] and pygame.time.get_ticks() - self.jump_time > self.jump_cd:
            self.vel.y = -self.jump_vel
            self.jump_time = pygame.time.get_ticks()
            self.jump_available = False
        if bam_tuong and self.vel.y > 0:
            self.vel.y = self.gravity * dt * 10
        else:
            self.vel.y += self.gravity * dt

        #Falling
        self.rect.centery += self.vel.y * dt
        for surface in map1.list_of_surface:
            for index in range(len(surface.list_of_2point) - 1):
                if self.rect.clipline(surface.list_of_2point[index], surface.list_of_2point[index + 1]):
                    point1 = surface.list_of_2point[index]
                    point2 = surface.list_of_2point[index + 1]
                    self.rect.centery -= self.vel.y * dt
                    self.vel.y = 0
                    rect_temp = self.image.get_frect(center = (self.rect.centerx, self.rect.centery + y / 144))
                    if rect_temp.clipline(point1, point2) and pygame.time.get_ticks():
                        self.jump_available = True
            
        

    def update(self, dt):
        mouse = pygame.mouse.get_just_pressed()
        mouse_pos = pygame.mouse.get_pos()
        vector_x = mouse_pos[0] - self.rect.centerx
        vector_y = mouse_pos[1] - self.rect.centery
        angle = math.atan2(vector_y , vector_x)
        
        #Bắn phát đạn đầu
        if mouse[0] and self.ammo > 0 and self.shoot_available:
            Bullet((sprites.all_sprites, sprites.Bullet_sprites), self.rect.center, angle, self.homing, self)
            self.bullet_remain = min(self.bullet_per_shoot, self.ammo) - 1
            self.burst_time = pygame.time.get_ticks()
            self.ammo -= min(self.bullet_per_shoot, self.ammo)
            self.shoot_available = False
            self.shoot_time = pygame.time.get_ticks()

        #Delay mỗi lần bắn
        elif not self.shoot_available:
            current = pygame.time.get_ticks()
            if current - self.shoot_time >= self.shoot_cd:
                self.shoot_available = True

        # Bắn số đạn còn lại góc random
        if self.bullet_remain > 0 and pygame.time.get_ticks() - self.burst_time >= self.burst_cd:
            Bullet((sprites.all_sprites, sprites.Bullet_sprites), self.rect.center, random.uniform(angle - 0.1, angle + 0.1), self.homing, self)
            self.bullet_remain -= 1
            self.burst_time = pygame.time.get_ticks()

        #reload
        if self.ammo < self.max_ammo:
            if pygame.time.get_ticks() - self.shoot_time >= self.reload:
                self.ammo = self.max_ammo
        
        #di chuyển
        self.move(dt)
        