/*Write a program to use string handling functions strlen(), strcpy(), strcat() and strcmp()*/
#include<stdio.h>
#include<string.h>
#define MAX 100

void main(){
    char str1[MAX],str2[MAX];
    int l,i;
    printf("Enter two Strings:");
    scanf("%s %s",str1,str2);
    i=strlen(str1);
    l=strlen(str2);

    printf("length of the first string %s and Second one is %s =\n%d\n%d\n",str1,str2,i,l);
    if(strcmp(str1,str2)==0){
        printf("Both the string are equal");
    }else{
        printf("Both the string are not idential\n");
        strcat(str1,str2);
        printf("The First String after strcat() is=%s\n",str1);
        strcpy(str1,str2);
        printf("The First String after strcpy() is=%s\n",str2);

    }
}