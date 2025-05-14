/*Write a program to accept real number x and integer n and calculate the
sum of first n terms of the series (1/x)+(2/x^2)+(3/x^3)+... .*/

#include<stdio.h>
int main()
{
   int x,n,i,j;
   float sum=0,p,m;
   printf("Enter Value of x : ");
   scanf("%d",&x);
   printf("Enter Limit : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      m=x;
      for(j=1;j<i;j++)
      {
         m=(m*x);
      }
      p=i/m;
      sum=sum+p;
   }
   printf("\nSum of First n terms of Series = %.2f",sum);
}