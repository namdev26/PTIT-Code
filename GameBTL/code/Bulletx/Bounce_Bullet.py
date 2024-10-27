import Bullet

class Bounce_Bullet(Bullet):
    def __init__(self, groups, pos, angel, homing):
        super().__init__(groups, pos, angel, homing)
        self.bounce = 0
    def update(self, dt):
        super().update(dt)