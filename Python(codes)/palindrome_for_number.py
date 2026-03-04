num=int(input("Enter a Number:"))
orignal=num
rev=0

while(num>0):
    digit=num%10
    rev=rev*10+digit
    num//=10
if(rev==orignal):
    print(f"{orignal} is a Palindrome Number\n")
else:
    print(f"{orignal} is not a Palindrome Number\n")

