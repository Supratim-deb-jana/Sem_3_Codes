/*Write a program to enter a string and convertn upper case to lower case letters without using library function*/


#include<stdio.h>
#include<string.h>

void main(){
    char str1[100];
    printf("Enter one String:");
    fgets(str1,100,stdin);
    int count = strlen(str1);

    for(int i=0; str1[i] != '\0'; i++){
        if(str1[i] >= 65 && str1[i] <= 90){
            str1[i] = str1[i] + 32;
        }
    }

    puts(str1);
    
}
