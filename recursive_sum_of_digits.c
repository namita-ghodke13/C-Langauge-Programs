/*Write a recursive C function to calculate the sum of digits of a number. Use this 
function in main to accept a number and print sum of its digits.*/

#include<stdio.h>
int sum(int a);
int main()
{
   int num,result;
   printf("\nEnter Number : ");
   scanf("%d",&num);
   result=sum(num);
   printf("\nSum of Digits of %d is %d\n",num,result);
   return 0;
}
int sum(int num)
{
   if(num!=0)
   {
      return (num % 10 + sum (num/10));
   }
   else
   {
      return 0;
   }
}