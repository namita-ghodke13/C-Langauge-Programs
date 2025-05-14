/*Write a program to accept n and display its multiplication table.*/

#include<stdio.h>
int main()
{
   int n,i;
   printf("Enter Number : ");
   scanf("%d",&n);
   printf("\nTable of %d -\n",n);
   for(i=1;i<=10;i++)
   {
      printf("%d\n",n*i);
   }
}