/*Write a program to accept an integer and reverse the number.
Example : Input : 546 , Output = 645.*/

#include<stdio.h>
int main()
{
   int n,i=0,r;
   printf("Enter Number : ");
   scanf("%d",&n);
   printf("\nReverse Number = ");
   while (n!=0)
   {
      r=n%10;
      n=n/10;
      i++;
      printf("%d",r);
   }
}