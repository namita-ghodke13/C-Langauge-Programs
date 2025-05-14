/*Write a program to display the first n Fibonacci numbers.
(1 1 2 3 5... ...).*/

#include<stdio.h>
int main()
{
   int n,first=0,second=1,next,c=1;
   printf("Enter Limit : ");
   scanf("%d",&n);
   printf("First %d terms of Fibonacci Series are :\n",n);
   while(c<=n)
   {
      if(c<=1)
         next=c;
      else
      {
         next=first+second;
         first=second;
         second=next;
      }
      printf("%d\t",next);
      c++;
   }
}