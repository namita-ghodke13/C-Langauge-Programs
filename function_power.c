/*Write a function power, which calculates x^y. Write another function, which calculates
n! using for loop. Use these functions to calculate the sum of first n terms of the 
Taylor series:
sin(x)= x - x^3/3! + x^5/5! + ..... */

#include<stdio.h>
#include<math.h>
void calculate();
void main()
{
   calculate();
}
void calculate()
{
   int x,i;
   int fact=1,n;
   float sum=0;
   printf("\nEnter the value of x in the Series : ");
   scanf("%d",&x);
   printf("\nEnter the number of terms in the Series : ");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
      fact=fact*i;
      sum=sum+(pow(x,i)/fact);
   }
   sum=sum+1;
   printf("\nThe Sum of the Taylor Series is : %.2f\n\n",sum);
}