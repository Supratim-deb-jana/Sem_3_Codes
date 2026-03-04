def factorial(n):
    if(n<=1):
        return 1
    else:
        return n*factorial(n-1)
num=int(input("Enter a Number:"))
result=factorial(num)
print(f"The Factorial of {num} is: {result}")