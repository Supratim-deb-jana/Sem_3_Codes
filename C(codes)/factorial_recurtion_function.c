/*Write a Program in C to find the factorial of a number using  recursive function.*/

#include<stdio.h>

int factorial(int p);
void main(){
    int n,f;
    printf("Enter a number:");
    scanf("%d",&n);
    f=factorial(n);
    printf("Factorial of %d is= %d",n,f);
}
int factorial(int p){
    if(p==0 || p==1){
        return 1;
    }
    else{
        return p*factorial(p-1);
    }
}