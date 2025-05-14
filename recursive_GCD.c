/*Write a recursive C function to calculate the GCD of two numbers. Use this function 
in main. The GCD is calculated as :
gcd(a,b) = a          if b = 0
         = gcd (b,a mod b) otherwise */

#include<stdio.h>
int gcd(int,int);
int main()
{
   int a,b,result;
   printf("\nEnter two numbers to find their GCD : ");
   scanf("%d%d",&a,&b);
   result=gcd(a,b);
   printf("\nThe GCD of %d and %d is %d.\n",a,b,result);
}
int gcd(int a,int b)
{
   while(a!=b)
   {
      if(a>b)
      {
         return gcd(a-b,b);
      }
      else
      {
         return gcd(a,b-a);
      }
   }
   return a;
}