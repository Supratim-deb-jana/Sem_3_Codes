import random

def game():
    print("You are Playing the Game...!")
    score=random.randint(1,100)
    with open("Hi_score.txt") as i:
        contains=i.read()
        if(contains==""):
            with open("Hi_score.txt","w") as j:
                j.write("0")
        else:
            c=int(contains)
            s=str(score)
            if(c<=score):
                with open("Hi_score.txt","w") as k:
                    k.write(s)
            print(f"Your Score is :{score}")
print("Enter 'start':",end="")
G=input()
if(G=="start"):
    game()