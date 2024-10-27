import os.path
import sys

sys.path.append(os.path.join(os.path.dirname(__file__), '..'))

from display import WINDOW_HEIGHT, WINDOW_WIDTH
from Bulletx.Bullet import *
import sprites

class Explode_Bullet(Bullet):
    def __init__(self, groups, pos, angel, homing, player):
        super().__init__(groups, pos, angel, homing, player)
        self.collided = False
        self.time_collided = 0
    def update(self, dt):
        super().update(dt)
        for map in sprites.Map_sprites:
            if pygame.Rect.collidepoint(map.rect, self.rect.center):
                if(not self.collided):
                    self.time_collided = pygame.time.get_ticks()
                    self.collided = True
                self.direction.xy = (0, 0)
                self.gravity = 0
                if pygame.time.get_ticks() - self.time_collided > 1500:
                    self.kill()
                    Explosion(sprites.Explosion_sprites, self.rect.center)

class Explosion(pygame.sprite.Sprite):
    def __init__(self, groups, pos):
        super().__init__((groups, sprites.all_sprites))
        self.image = pygame.Surface((50, 50))
        self.rect = self.image.get_frect(center = pos)
        self.duration = 100
        self.time = pygame.time.get_ticks()
    def update(self, dt):
        current = pygame.time.get_ticks()
        if current - self.time > self.duration :
            self.kill()