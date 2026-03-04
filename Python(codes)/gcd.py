def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)
num1=int(input("Enter First Number:"))
num2=int(input("Enter Second Number:"))
result=gcd(num1,num2)

print(f"GCD of {num1} and {num2} is: {result}")