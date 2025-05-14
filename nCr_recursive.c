/*Write a recursive program of nCr combinations for different values of n and r. Define 
a global integer variable count and increment it in nCr function. Add a printf statement 
in main function for variable count. */

#include<stdio.h>
int count=0;
long int nCr(int n,int r)
{
   count++;
   if(n==r || r==0)
      return (1);
   else
      return (nCr(n-1,r)+nCr(n,r-1));
}
int main()
{
   int n,r;
   printf("\nEnter the Total number of Objects (n) : ");
   scanf("%d",&n);
   printf("\nEnter the number of objects to be selected (r) : ");
   scanf("%d",&r);
   printf("\nThe value of %dC%d is : %ld\n",n,r,nCr(n,r));
   printf("\nThe nCr function was called %d times.\n",count);
   return 0;
}