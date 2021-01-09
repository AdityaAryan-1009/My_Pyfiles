import pygame
pygame.init()
win = pygame.display.set_mode((500,500))
pygame.display.set_caption("Robog_ka_Game")

x=50
y=40
width=30
height=10
run=True

while run:
    pygame.time.delay(100)
    for keys in pygame.key.get_pressed():
        if keys==pygame.QUIT:
            run=False


    pygame.draw.rect(win,(255,145,0),(x,y,width,height))
    pygame.display.update()


pygame.quit()
exit()