/*Write a program that accepts numbers continuosly as long as the number is 
positive and prints the sum of the numbers.*/

#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter Positive numbers to Sum : ");
   while(1)
   {
      scanf("%d",&n);
      if(n<0)
      {
         break;
      }
      sum=sum+n;
   }
   printf("\nSum = %d",sum);
}