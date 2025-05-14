/*Write a program to print sum of first n numbers and execute the program
for different values of n.*/

#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("Enter Number : ");
   scanf("%d",&n);
   while(n>0)
   {
      sum=sum+n;
      n--;
   }
   printf("\nSum of First n Numbers = %d",sum);
}