/*write a program to find the factorial of a number using function*/
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
    int k=1,i;
    for(i=1;i<=p;i++){
        k=k*i;
    }
    return k;
}