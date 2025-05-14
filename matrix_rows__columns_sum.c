/*Write a program to accept, display and print the sum of elements of each row and sum
of elements of each column of a matrix.*/

#include<stdio.h>
int main()
{
   int a[10][10],m,n;
   void display(int a[10][10],int m,int n);
   void accept(int a[10][10],int m,int n);
   void sumofRows(int a[10][10],int m,int n);
   void sumofColumns(int a[10][10],int m,int n);

   printf("\nHow many Rows and Columns : ");
   scanf("%d%d",&m,&n);
   printf("\nEnter Matrix Elements : ");
   accept(a,m,n);
   printf("\nMatrix : ");
   display(a,m,n);
   sumofRows(a,m,n);
   sumofColumns(a,m,n);
}
void accept(int a[10][10],int m,int n)
{
   int i,j;
   for(i=0;i<m;i++)
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
}
void display(int a[10][10],int m,int n)
{
   int i,j;
   printf("\nElements of Matrix :\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
         printf("%d\t",a[i][j]);
      printf("\n");
   }
}
void sumofRows(int a[10][10],int m,int n)
{
   int i,j,sum;
   for(i=0;i<m;i++)
   {
      sum=0;
      for(j=0;j<n;j++)
         sum=sum+a[i][j];
      printf("\nSum of Elements of Row %d : %d\n",i,sum);
   }
}
void sumofColumns(int a[10][10],int m,int n)
{
   int i,j,sum;
   for(i=0;i<m;i++)
   {
      sum=0;
      for(j=0;j<n;j++)
         sum=sum+a[j][i];
      printf("\nSum of Elements of Column %d : %d\n",i,sum);
   }
}