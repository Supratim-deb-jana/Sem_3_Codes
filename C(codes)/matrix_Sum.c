/*Write a Program in C to enter two m x n matrices and print their sum.*/
#include<stdio.h>
#define MAX 10
int main(){
    int m1[MAX][MAX],m2[MAX][MAX],m3[MAX][MAX],r,c,i,j;
    printf("How many row and coloums do you want:");
    scanf("%d %d",&r,&c);
    printf("Enter M1 matrix's elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter M2 matrix's elements:\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            m3[i][j]=m1[i][j]+m2[i][j];
        }
    }
    printf("Printing M3 elements\n(after addition)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",m3[i][j]);
        }
        printf("\n");
    }
    return 0;
}