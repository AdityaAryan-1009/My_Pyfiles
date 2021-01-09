# CODE FOR SNAKE , WATER , GUN
# MADE BY ADITYA ARYAN
import random
import datetime
def gettime():
   a= datetime.datetime.now()
   return a
player_1=str(input("Enter your name- "))
ctr=0  # VARIABLE FOR RUNNING WHILE LOOPS FOR FIVE TIMES
a=0    #VARIABLE FOR STORING THE VALUE OF USER WINS
b=0    #VARIABLE FOR STORING THE VALUE OF COMPUTER WINS
d=0    #VARIABLE FOR STORING VALUE OF DRAW BETWEEN USER AND COMPUTER
print("\n")
print(f"Welcome {player_1}!!!")
print("Result of this game would be displayed at last(i.e When the game ends)")
with open("player_index.txt","a") as f:#CODE FOR STORING THE NAME OF A PLAYER IN A FILE
    f.write(f"\n{gettime()}  {player_1}  -")
while(ctr<5):
    ctr=ctr+1
    print("\nThis is a game of STONE,PAPER,SCISSOR :")
    print("Press 1 for STONE")
    print("Press 2 for PAPER")
    print("Press 3 for SCISSOR")
    player_int=input()#GETTING INPUT FROM USER
    list1=["stone","paper","scissor"]
    compuer = random.choice(list1)#CODE FOR COMPUTER TO CHOOSE RANDOM THING FROM LIST1
    print("Computer chose- ",compuer)
    if player_int=="1" and compuer=="scissor":
        a= a+1
        print(f"Congrats {player_1}!!! you won" )
    elif player_int=="2" and compuer=="scissor":
        b=b+1
        print("computer won")
    elif player_int=="3" and compuer=="stone":
        b=b+1
        print("Computer won")
    elif player_int=="2" and compuer=="stone":
        a=a+1
        print(f"Congrats {player_1}!!! you won ")
    elif player_int=="1" and compuer=="paper":
        b=b+1
        print("Computer won")
    elif player_int=="3" and compuer=="paper":
        a=a+1
        print(f"Congrats {player_1}!!! you won ")
    elif player_int=="1" and compuer=="stone":
        d=d+1
        print("Draw between you and compter")
    elif player_int=="2" and compuer=="paper":
        d=d+1
        print("Draw between you and compter")
    elif player_int=="3" and compuer=="scissor":
        d=d+1
        print("Draw between you and compter")
print("\n* You won ",a," times")
print("* Computer won ",b," times" )
print("* Draw between you and computer for ",d," times")
with open("player_index.txt","a") as f:#CODE FOR STORING THE NO. OF WINS BY EACH PLAYER
    f.write(f" you won {a} times ")
