/*Write a recursive C function to calculate x^y.(Do not use standard library function)*/

#include<stdio.h>
int power(int,int);
int main()
{
   int pow,num;
   long result;
   printf("\nEnter Number : ");
   scanf("%d",&num);
   printf("\nEnter its Power : ");
   scanf("%d",&pow);
   result=power(num,pow);
   printf("\n%d^%d is %ld",num,pow,result);
   return 0;
}
int power(int num,int pow)
{
   if(pow)
   {
      return (num*power(num,pow-1));
   }
   return 1;
}