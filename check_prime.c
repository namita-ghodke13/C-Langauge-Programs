/*Write a program to accept an integer and check if it is prime or not.*/

#include<stdio.h>
int main()
{
   int n,i,flag=0;
   printf("Enter Positive Number : ");
   scanf("%d",&n);
   for(i=2;i<=n/2;i++)
   {
      if(n%i==0)
      {
         flag=1;
         break;
      }
   }
   if(flag==0)
      printf("%d is a Prime Number",n);
   else
      printf("%d is not a Prime Number",n);
}