/*Write a program to accept an mXn matrix and display an m+1 X n+1 matrix such that the
m+1th row contains the sum of all elements of corresponding row and the n+1th column 
contains the sum of elements of the corresponding column.
Example :      A                         B
               1   2   3                 1    2    3    6
               4   5   6                 4    5    6    15
               7   8   9                 7    8    9    24     
                                         12   15   18   45
*/

#include<stdio.h>
int main()
{
   int i,j,m,n,p,q,t=0;
   int a[10][20],x[10],y[10];
   int sumR,sumC;
   printf("\nEnter Number of Rows : ");
   scanf("%d",&m);
   printf("\nEnter Number of Columns : ");
   scanf("%d",&n);
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("\nEnter element in [%d][%d] : ",i,j);
         scanf("%d",&a[i][j]);
      }
   }
   printf("\n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("%d\t",a[i][j]);
      }
      printf("\n");
   }
   printf("\n");
   p=1;
   for(i=0;i<m;i++)
   {
      sumR=0;
      for(j=0;j<n;j++)
      {
         sumR=sumR+a[i][j];
      }
      x[p]=sumR;
      p++;
   }
   printf("\n");
   q=1;
   for(i=0;i<n;i++)
   {
      sumC=0;
      for(j=0;j<m;j++)
      {
         sumC=sumC+a[j][i];
      }
      y[q]=sumC;
      q++;
   }
   p=1;
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         printf("%d\t",a[i][j]);
      }
      printf("%d",x[p]);
      p++;
      printf("\n");
   }
   for(i=1;i<q;i++)
   {
      t=t+y[i];
      printf("%d\t",y[i]);
   }
   printf("%d\t",t);
   return 0;
}