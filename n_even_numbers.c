/*Write a program to accept an integer n and display all even numbers upto
n.*/

#include<stdio.h>
int main()
{
   int n,i=1;
   printf("Enter Number : ");   
   scanf("%d",&n);   
   printf("\nEven Numbers upto n :\t");
   n++;
   while(n!=i)
   {
      if(i%2==0)
      {
         printf("%d\t",i);
      }
      i++;
   }
}