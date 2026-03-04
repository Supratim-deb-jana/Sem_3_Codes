/*Write a Program in C to check whether an input character is VOWEL  or CONSONANT using switch case statement.*/
#include<stdio.h>
#include<string.h>
#define MAX 100
void main(){
    char str[MAX];
    int v=0,c=0,i,l;
    printf("Enter a String:");
    scanf("%s",str);
    l=strlen(str);
    for( i=0; i<l; i++){
        switch(str[i]){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            v++;
            break;
            default:
            c++;
        }
    }
    printf("The Number of Vowels are:%d\n",v);
    printf("The Number of Constants are:%d\n",c);
}