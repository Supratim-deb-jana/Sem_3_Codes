num1=int(input("Enter First Number:"))
num2=int(input("Enter Second Number:"))
num3=int(input("Enter First Number:"))
if(num1>num2 and num1>num3):
    big=num1
elif(num2>num1 and num2>num3):
    big=num2
else:
    big=num3
print(f"The Greatest Number is:{big}")