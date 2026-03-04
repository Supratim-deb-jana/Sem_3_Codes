//Write a Program in C to whether a string is PALINDROME or NOT PALINDROME .
#include<stdio.h>
#include<string.h>

int palindrome(char *str);
void main(){
    char str[50];
    printf("Enter a String:");
    scanf("%s",str);

    if(palindrome(str)){
        printf("Its a palindrome\n");
    }else{
        printf("Its not a palindrome\n");
    }
}
int palindrome(char *str){
    int len;
    len=strlen(str);
    for(int i=0; i<len/2; i++){
        if(str[i] != str[len-i-1]){
            return 0;
        }
    }
    return 1;
}