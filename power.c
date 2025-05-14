/*Write a program to accept two integers x and n and compute x^n.*/

#include<stdio.h>
int main()
{
   int x,n,pow=1,i=1;
   printf("Enter Value of x : ");
   scanf("%d",&x);
   printf("Enter Value of n : ");
   scanf("%d",&n);
   pow=x;
   while(n!=i)
   {
      pow=pow*x;
      i++;
   }
   printf("\n%d to the power %d = %d",x,n,pow);
}