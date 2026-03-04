/*Write a Program in C to find the hcf(GCD) of two numbers using function.*/
#include<stdio.h>
int gcd(int a, int b){
    if(b==0){
        return a;
    }else{
        return gcd(b,a%b);
    }
}
void main(){
    int num1,num2;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&num1,&num2);
    printf("GCD of %d and %d is=%d",num1,num2,gcd(num1,num2));
}