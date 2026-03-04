num=int(input("Enter a Number:"))
sum=0
while(num>0):
    digit=num%10
    sum+=digit
    num//=10
print(f"The Reverse Number is:{sum}")