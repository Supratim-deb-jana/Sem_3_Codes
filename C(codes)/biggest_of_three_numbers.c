/*Write a Program in C to find the biggest of any three numbers using conditional operators.*/
#include<stdio.h>
void main(){
    int num1,num2,num3;
    printf("Enter Three Numbers:");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2){
        if(num1>num3){
            printf("%d is the biggest Number",num1);
        }else{
            printf("%d is the biggest Number",num3);
        }
    }else if(num2>num3){
        printf("%d is the biggest Number",num2);
    }else{
        printf("%d is the biggest Number",num3);
    }
    
}