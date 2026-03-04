/**Write a program to find the transpose of the n*n matrix and print the Output*/
# include<stdio.h>

void main(){
      int m1[10][10],m2[10][10];
      int i,j,r,c;
      printf("please Enter row & coloum in matrix: ");
      scanf("%d %d",&r,&c);

      printf("\nEnter the element of 1'st matrix:\n");
      for(i=0; i<r; i++){
            for(j=0; j<c; j++){
                  scanf("%d",&m1[i][j]);
            }
      }

      

      for(j=0; j<r; j++){
            for(i=0; i<c; i++){
                  m2[i][j] = m1[j][i];
            }
      }
      printf("The elements of 2'nd matrix:\n");
      for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                  printf("%d ",m2[i][j]);
                 
            }
             printf("\n");
      }

}