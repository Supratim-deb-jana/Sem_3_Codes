/*Write a program to enter a string and convertn lower case to upper case*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char word[100];
    printf("Enter one String:");
    scanf("%s",word);
    int count = strlen(word);

    for(int i=0; i<count; i++){
        word[i] = toupper(word[i]);
    }

    printf("Upper String:%s\n",word);
    return 0;
}