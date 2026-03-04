/*Write a program to enter a string and convertn lower case to upper case*/


#include<stdio.h>
#include<string.h>

void main(){
    char word[100];
    printf("Enter one String:");
    fgets(word, 100, stdin);
    int count = strlen(word);
    int C=0;
    for(int i=0; i<count-1; i++){
        C++;
    }

   printf("%d",C);
}