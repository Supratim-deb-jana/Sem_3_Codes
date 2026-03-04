num1=int(input("Enter First Number:"))
num2=int(input("Enter Second Number:"))
if(num1>num2):
    smaller=num2
else:
    smaller=num1
gcd=1
i=1
while(i<=smaller):
    if(num1%i==0 and num2%i==0):
        gcd=i
    i=i+1
print(f"GCD of {num1} and {num2} is: {gcd}")