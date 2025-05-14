/*Write a program to accept a matrix A of size mXn and store its transpose in matrix B.
Display matrix B. Write separate functions.*/

#include<stdio.h>
void main()
{
   static int a[10][10];
   int i,j,m,n;
   printf("\nEnter Rows and Columns of Matrix : ");
   scanf("%d %d",&m,&n);
   printf("\nEnter Elements of Matrix : ");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   printf("\nMatrix : \n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf(" %d",a[i][j]);
      }
      printf("\n");
   }
   printf("\nTranspose of Matrix : \n");
   for(j=0;j<n;j++)
   {
      for(i=0;i<m;i++)
      {
         printf(" %d",a[i][j]);
      }
      printf("\n");
   }
}