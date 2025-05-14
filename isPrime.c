/*Write a function isPrime, which accepts an integer as parameter and returns 1 if the
number is prime and 0 otherwise. Use this function in main to display the first 10
prime numbers.*/

#include<stdio.h>
int isPrime(int n);
int main()
{
   int i=2,j=0,flag;
   while(j!=10)
   {
      flag=isPrime(i);
      if(flag==1)
      {
         j++;
         printf("%d\t",i);
      }
      i++;
   }
   return 0;
}
int isPrime(int n)
{
   int j,flag=1;
   for(j=2;j<=n/2;++j)
   {
      if(n%j==0)
      {
         flag=0;
         break;
      }
   }
   return flag;
}