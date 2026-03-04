/*Write a Program in C to find sum and average of n numbers using array.*/
#include<stdio.h>
void main(){
    int num,i;
    printf("Enter your Array's Size:");
    scanf("%d",&num);
    int arr[num];
    for(i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<num;i++){
        sum=sum+arr[i];
    }
    float avg;
    avg=sum/num;
    printf("Sum=%d\nAvarage=%.2f",sum,avg);
}