/*Write a menu driven program to perform the following operations on a square matrix.
Write separate functions for each option.
a. Check if the matrix is symmetric.
b. Display the trace of the matrix (sum of diagonal elements).
c. Check if the matrix is an upper triangular matrix. */

#include<stdio.h>
void symmetric();
void trace();
void upper();
void main()
{
   int ch;
   do 
   {
      printf("\n1. Check if the matrix is symmetric.");
      printf("\n2. Display the trace of the matrix (sum of diagonal elements).");
      printf("\n3. Check if the matrix is an upper triangular matrix.");
      printf("\n\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:symmetric();
                break;
         case 2:trace();
                break;
         case 3:upper();
                break;
         default:printf("\nInvalid Choice...");
      }
   }while(ch!=4);
}
void symmetric()
{
   int m,n,c,d,a[10][10],transpose[10][10];
   printf("\nEnter number of Rows and Columns : ");
   scanf("%d%d",&m,&n);
   printf("\nEnter Elements of Matrix : \n");
   for(c=0;c<m;c++)
     for(d=0;d<n;d++)
       scanf("%d",&a[c][d]);

   for(c=0;c<m;c++)
     for(d=0;d<n;d++)
       transpose[d][c]=a[c][d];
      
   if(m==n)
   {
      for(c=0;c<m;c++)
      {
         for(d=0;d<m;d++)
         {
            if(a[c][d]!=transpose[c][d])
               break;
         }
         if(d!=m)
           break;
      }
      if(c==m)
         printf("\nThe Matrix is Symmetric.\n");
      else
         printf("\nThe Matrix is not Symmetric.\n");
   }
   else
      printf("\nThe Matrix is not Symmetric.\n");
}
void trace()
{
   int a[10][10],i,j,sum=0,m,n;
   printf("\nEnter value of Rows and Columns : ");
   scanf("%d%d",&m,&n);
   printf("\nEnter Elements of Matrix : \n");
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         if(i==j)
            sum=sum+a[i][j];
   printf("\nTrace of Matrix (Sum of Diagonal Elements) = %d\n",sum);         
}
void upper()
{
   int a[10][10];
   int i,j,upper,rows,cols;
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
   upper=1;
   for(i=0;i<rows;i++)
   {
      for(j=0;j<cols;j++)
      {
         if(j<i && a[i][j]!=0)
         {
            upper=0;
         }
      }
   }
   if(upper=1)
   {
      printf("\nThe Matrix is Upper Triangular Matrix.\n");
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
      printf("\nThe Matrix is not Upper Triangular Matrix.\n");
   }
}