/*Accept two integers from the user and interchange them.Display the 
interchanged numbers.*/

#include<stdio.h>
int main()
{
   int a,b,t;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   t=a;
   a=b;
   b=t;
   printf("\nFirst Number = %d",a);
   printf("\nSecond Number = %d",b);
}