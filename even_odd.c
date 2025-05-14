/*Write a program to accept an integer and check if it is even or odd.*/

#include<stdio.h>
int main()
{
   int n;
   printf("Enter Number : ");
   scanf("%d",&n);
   if(n%2==0)
      printf("\nNumber is Even");
   else
      printf("\nNumber is Odd");
}