/*Write a program to accept three numbers and check whether the first is 
between the other two numbers. Ex:Input 20 10 30. Output:20 is between 10 
and 30.*/

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
   if((a>b)&&(a<c))
      printf("\n%d is bewteen %d and %d",a,b,c);
   else 
      printf("\n%d is not bewteen %d and %d",a,b,c);
}