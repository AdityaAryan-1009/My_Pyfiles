# CODE FOR GUESSING NUMBER GAMES
# MADE BY ADITYA ARYAN
import random
r_n=random.randint(0,100)
print("Enter your name - ", end=" ")
p_name=str(input())
print(f"\nWelcome!! {p_name}")
print("This is a guessing number game")
print("Rules :-")
print("* You have to enter a number between 0 to 100 ")
print("* For winning ,the number you entered should match the number randomly generated by computer")
print("* You will get 5 chance")
ctr=0
while ctr<5:
     ctr=ctr+1
     if ctr==1:
         print("\nThis is your first chance")
     elif ctr==2:
         print("\nThis is your second chance")
     elif ctr == 3:
         print("\nThis is your third chance")
     elif ctr == 4:
         print("\nThis is your fourth chance")
     elif ctr==5:
         print("\nThis is your last chance")
     else:
         print("You lost!! Better luck next time....")
     p_n=int(input("Enter the number- "))
     if p_n==r_n:
         print("Congratulation!! You win")
         print("You won in ",ctr," chance")
         break
     elif p_n<r_n:
         print("Enter a larger number")
         if ctr==5:
             print(f"{p_name} Lost!!! Better luck next time....")
         else:
             continue
     elif p_n>r_n and p_n<7112004:
         print("Enter a smaller number")
         if ctr==5:
             print(f"{p_name} Lost!!! Better luck next time....")
         else:
             continue
     elif p_n==7112004: # CHEAT CODE
         print(r_n)
print("\n"
      "\nDo you want to play more(y/n)- ")
ch_pl=str(input())
if ch_pl=="y":
    print("Are you berozgar???")
    print("ja kuch kaam kar!!")
    print("khelna baad me!!")
else:
    print("Good you have not wasted much of your time")