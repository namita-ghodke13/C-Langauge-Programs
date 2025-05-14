/*Write a C program to display the sum of digits of a number till the number
reduces to a single digit number.*/

#include<stdio.h>
int main()
{
   int n,sum=0,d;
   printf("Enter Number : ");
   scanf("%d",&n);
   while(n>0)
   {
      d=n%10;
      sum=sum+d;
      n=n/10;
   }
   printf("Sum of Digits of a Number = %d",sum);
}