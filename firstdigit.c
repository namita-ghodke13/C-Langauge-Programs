/*Write a program that accepts a number and prints its first digit.*/

#include<stdio.h>
int main()
{
   int n,f;
   printf("Enter Number : ");
   scanf("%d",&n);
   f=n;
   while(f>=10)
   {
      f=f/10;
   }
   printf("\nFirst Digit of %d = %d",n,f);
}