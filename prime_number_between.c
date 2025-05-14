/*Write a program to display all prime numbers between _____ and _____ .*/

#include<stdio.h>
int main()
{
   int a,b,i,flag,n;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   if(a>b)
   {
      n=b;
      b=a;
      a=n;
   }
   printf("\nPrime Numbers Between %d and %d are - ",a,b);
   while(a<b)
   {
      flag=0;
      for(i=2;i<=a/2;i++)
      {
         if(a%i==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d ",a);
      ++a;
   }
}