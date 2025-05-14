/*Write a program to accept real number x and integer n and calculate the
sum of first n terms of the series x+3x+5x+7x+... .*/

#include<stdio.h>
int main()
{
   int x,n,sum=0,i;
   printf("Enter Value of x : ");
   scanf("%d",&x);
   printf("Enter Limit : ");
   scanf("%d",&n);
   n=n*(2);
   for(i=0;i<n;i++)
   {
      if(i%2!=0)
      {
         sum=sum+(i*x);
      }
   }
   printf("Sum of First n terms of Series = %d",sum);
}