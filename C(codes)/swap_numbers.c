/*7.	Write a Program in C to swap two numbers using call by address(reference).*/
#include<stdio.h>
void swap_numbers(int *a, int *b);
int main(){
    int num1,num2;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&num1,&num2);
    swap_numbers(&num1,&num2);
    printf("After interchangeof two numbers,Number1=%d and Number2=%d",num1,num2);
    return 0;
}
void swap_numbers(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}