def palindrome(str):
    lenth=len(str)
    for i in range(0,lenth//2):
        if(str[i] != str[lenth-i-1]):
            return 0
    return 1

str=input("Enter a String:")
if(palindrome(str)):
    print(f"'{str}' is a Palindrome String\n")
else:
    print(f"'{str}' is not a Palindrome String\n")