/*Write a recursive function to calculate the sum of digits of a number till you get 
a single digit number.
Example : 961 -> 16 -> 5. (Note : Do not use a loop)*/

#include<stdio.h>
int sumofDigits(int n)
{
   if(n==0)
      return 0;
   return n%10+sumofDigits(n/10);
}
int singleDigitSum(int n)
{
   if(n<10)
      return n;
   return singleDigitSum(sumofDigits(n));
}
int main()
{
   int num;
   printf("\nEnter Number : ");
   scanf("%d",&num);
   printf("\nSingle Digit Sum of %d is %d.\n",num,singleDigitSum(num));
   return 0;
}