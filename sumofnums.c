/*Write a program that accepts numbers continuosly as long as the number is 
positive and prints the sum of the numbers.*/

#include<stdio.h>
int main()
{
   int n,sum=0;
   do
   {
      printf("Enter Number : ");
      scanf("%d",&n);
      sum=sum+n;
   } while (n>0);
   printf("\nSum = %d",sum);
}