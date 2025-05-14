/*Write a program to display all Armstrong numbers between 1 and 500.(An 
Armstrong number is a number such that the sum of cube of digits = number 
itself Ex. 153=1*1*1 + 5*5*5 + 3*3*3).*/

#include<stdio.h>
int main()
{
   int n,r,sum,temp;
   printf("\nArmstrong Numbers Between 1 and 500 :\n");
   for(n=1;n<=500;n++)
   {
      temp=n;
      sum=0;
      while(temp!=0)
      {
         r=temp%10;
         temp=temp/10;
         sum=sum+(r*r*r);
      }
      if(sum==n)
         printf("%d\n",n);
   }
}