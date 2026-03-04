import random

computer = random.choice([-1,1,0])
youStr = input("Enter Your Choice:")
youDict = {"rock":-1, "paper":1,"shizer":0}
comDict = {-1:"Rock", 1:"Paper", 0:"Shizer"}
com = comDict[computer]
you = youDict[youStr]

print(f"Your Choice is:{(youStr.capitalize())}\nComputer choice:{com}")

if(computer == you):
    print("It's a Draw")
else:
    if(computer == -1 and you == 1):
        print("You Win")
    elif(computer == -1 and you == 0):
        print("You Lose")
    elif(computer == 1 and you == 0):
        print("You Win")
    elif(computer == 1 and you == -1):
        print("You Lose")
    elif(computer == 0 and you == 1):
        print("You Lose")
    elif(computer == 0 and you == -1):
        print("You win")
    else:
        print("Something's are Wrong!")