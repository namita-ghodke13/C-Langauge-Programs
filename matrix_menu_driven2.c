/*Write a menu driven program to perform the following operations on a square matrix.
Write separate functions for each option.
i)  Check if the matrix is a lower triangular matrix.
ii) Check if it is an identity matrix. */

#include<stdio.h>
void lower();
void identity();
void main()
{
   int ch;
   do 
   {
      printf("\n1. Check if the matrix is a lower triangular matrix.");
      printf("\n2. Check if it is an identity matrix.");
      printf("\n\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:lower();
                break;
         case 2:identity();
                break;
         default:printf("\nInvalid Choice...");
      }
   }while(ch!=3);
}
void lower()
{
   int a[10][10];
   int i,j,lower,rows,cols;
   printf("\nEnter how many Rows (row = column): ");
   scanf("%d",&rows);
   cols=rows;
   printf("\nEnter Elements of Matrix :\n");
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }
   lower=1;
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         if(j>i && a[i][j]!=0)
         {
            lower=0;
         }
      }
   }
   if(lower=1)
   {
      printf("\nThe Matrix is Lower Triangular Matrix.\n");
      for(i=0;i<rows;i++)
      {
         for(j=0;j<cols;j++)
         {
            printf("%d ",a[i][j]);
         }
         printf("\n");
      }
   }
   else
   {
      printf("\nThe Matrix is not Lower Triangular Matrix.\n");
   }
}
void identity()
{
   int i,j,rows,columns,a[10][10],flag=1;
   printf("\nEnter Number of Rows and Columns : ");
   scanf("%d%d",&i,&j);
   printf("\nEnter Matrix Elements :\n");
   for(rows=0;rows<i;rows++)
   {
      for(columns=0;columns<j;columns++)
      {
         scanf("%d",&a[rows][columns]);
      }
   }
   for(rows=0;rows<i;rows++)
   {
      for(columns=0;columns<j;columns++)
      {
         if(a[rows][columns]!=1 && a[columns][rows]!=0)
         {
            flag=0;
            break;
         }
      }
   }
   if(flag==1)
   {
      printf("\nThe Matrix is Identity Matrix.\n");
   }
   else
   {
      printf("\nThe Matrix is not Identity Matrix.\n");
   }
}