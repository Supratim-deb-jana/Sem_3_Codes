//Write a Program in C to check whether a number is PRIME or NOT PRIME .
#include<stdio.h>

int main(){
    int num,flag=1;
    printf("Enter a Number:")   ;
    scanf("%d",&num);

    if(num<=1){
        flag=0;
    }else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                flag=0;
                break;
            }
        }
    }

    if(flag==0){
        printf("Its not a Prime Number\n");
    }else{
        printf("its a Prime number\n");
    }
    return 0;
}