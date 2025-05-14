/*Write a recursive program of factorial. Define a global integer variable count and
increment it in factorial function. Add a printf statement in main function for
variable count.*/

#include<stdio.h>
int count=0;
int main()
{
   int num;
   long int factorial(int n);
   printf("\nEnter Number : ");
   scanf("%d",&num);
   printf("\nThe Factorial of %d is : %ld\n",num,factorial(num));
   printf("\nFactorial function Count = %d\n",count);
}
long int factorial(int n)
{
   count++;
   if((n==0) || (n==1))
      return (1);
   else
      return (n*factorial(n-1));
}