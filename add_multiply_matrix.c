/*Write a program to add and multiply two matrices. Write separate functions to accept,
display, add and multiply the matrices. Perform necessary checks before adding and 
multiplying the matrices.*/

#include<stdio.h>
void accept(int [10][10],int,int);
void add(int [10][10],int [10][10],int,int);
void mul(int [10][10],int [10][10],int,int,int);
void display(int [10][10],int,int);
void main()
{
   int a[10][10],b[10][10];
   int r1,c1,r2,c2;
   printf("\nFor 1st Matrix : \n");
   printf("\nEnter no. of Rows : ");
   scanf("%d",&r1);
   printf("\nEnter no. of Columns : ");
   scanf("%d",&c1);
   printf("\nFor 2nd Matrix : \n");
   printf("\nEnter no. of Rows : ");
   scanf("%d",&r2);
   printf("\nEnter no. of Columns : ");
   scanf("%d",&c2);
   printf("\nEnter Elements of 1st Matrix : \n");
   accept(a,r1,c1);
   printf("\nEnter Elements of 2nd Matrix : \n");
   accept(b,r2,c2);
   if((r1==r2)&&(c1==c2))
     add(a,b,r1,c1);
   else
     printf("\nAddition not Possible");
   if(c1==r2)
     mul(a,b,r1,c1,c2);
   else
     printf("\nMultiplication not Possible");
}
void accept(int a[10][10],int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
}
void add(int a[10][10],int b[10][10],int r1,int c1)
{
   int i,j;
   int d[10][10];
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
      {
         d[i][j]=a[i][j]+b[i][j];
      }
   }
   printf("\nAddition of Two Matrix :\n");
   display(d,r1,c1);
}
void mul(int a[10][10],int b[10][10],int r1,int c1,int c2)
{
   int i,j,v[10][10],k;
   for(i=0;i<r1;i++)
   {
      for(j=0;j<c2;j++)
      {
         v[i][j]=0;
         for(k=0;k<c1;k++)
         {
            v[i][j]=v[i][j]+(a[i][k]*b[k][j]);
         }
      }
   }
   printf("\nMultiplication of Two Matrix :\n");
   display(v,r1,c2);
}
void display(int a[10][10],int r,int c)
{
   int i,j;
   for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
      {
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
}