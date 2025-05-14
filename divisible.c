/*Write a program to accept a number and check if it is divisible by 5 and 
7.*/

#include<stdio.h>
int main()
{
   int n;
   printf("Enter Number : ");
   scanf("%d",&n);
   if((n%5==0)&&(n%7==0))
      printf("\n%d is Divisible by 5 and 7",n);
   else
      printf("\n%d is not Divisible by 5 and 7",n);
}