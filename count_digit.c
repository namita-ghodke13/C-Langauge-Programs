/*Write a program to accept an integer and count the number of digits in the
number.*/

#include<stdio.h>
int main()
{
   int n,i=0,d;
   printf("Enter Number : ");
   scanf("%d",&n);
   while(n!=0)
   {
      d=n%10;
      n=n/10;
      i++;
   }
   printf("Number of Digits = %d",i);
}