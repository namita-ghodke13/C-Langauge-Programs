/*Write a recursive function to calculate the nth Fibonacci number. Use this function
in main to display the first n Fibonacci numbers. The recursive definition of nth
Fibonacci number is as follows :
fib(n) = 1                     if n = 1 or 2
       = fib(n-2) + fib(n-1)   if n > 2 */

#include<stdio.h>
int fibo(int);
int main()
{
   int num;
   int result;
   printf("\nEnter the nth number in Fibonacci series : ");
   scanf("%d",&num);
   if(num<0)
   {
      printf("\nFibonacci of negative number is not possible.\n");
   }
   else
   {
      result=fibo(num);
      printf("\nThe %d number in Fibonacci series is %d\n",num,result);
   }
   return 0;
}
int fibo(int num)
{
   if(num==0)
   {
      return 0;
   }
   else if(num==1)
   {
      return 1;
   }
   else
   {
      return (fibo(num-1)+fibo(num-2));
   }
}