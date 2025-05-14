/*Write a program,which accepts a number n and displays each digit in words.
Example : 6702 Output = Six-Seven-Zero-Two.(Hint : Reverse the number and 
use a switch statement)*/

#include<stdio.h>
int main()
{
   int a,n=1,x,m=0,p;
   printf("Enter Number : ");
   scanf("%d",&a);
   p=a;
   while(p!=0)
   {
      p=p/10;
      n=n*10;
   }
   while(a!=0)
   {
      n=n/10;
      x=a%10;
      a=a/10;
      m=m+(x*n);
   }
   while(m!=0)
   {
      x=m%10;
      m=m/10;
      switch(x)
      {
         case 0:printf("Zero-");
                break;
         case 1:printf("One-");
                break;
         case 2:printf("Two-");
                break;
         case 3:printf("Three-");
                break;
         case 4:printf("Four-");
                break;
         case 5:printf("Five-");
                break;
         case 6:printf("Six-");
                break;
         case 7:printf("Seven-");
                break;
         case 8:printf("Eight-");
                break;
         case 9:printf("Nine-");
                break;
      }
   }
}