/*Write a program to find the maximum of three numbers.*/

#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   printf("Enter Third Number : ");
   scanf("%d",&c);
   if((a>b)&&(a>c))
     printf("\nMaximum Number = %d",a);
   else if((b>a)&&(b>c))
     printf("\nMaximum Number = %d",b);
   else
     printf("\nMaximum Number = %d",c);
}