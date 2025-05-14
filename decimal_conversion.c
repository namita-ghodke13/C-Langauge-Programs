/*Write a program to accept a decimal number and convert it to binary, octal and 
hexadecimal. Write separate functions.*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
   int num,choice;
   printf("\nEnter Decimal Number : ");
   scanf("%d",&num);
   printf("\nBinary Value : ");
   conversion(num,2);
   printf("\nOctal Value : ");
   conversion(num,8);
   printf("\nHexadecimal Value : ");
   conversion(num,16);
   return 0;
}
void conversion(int num,int base)
{
   int remainder=num%base;
   if(num==0)
   {
      return;
   }
   conversion(num/base,base);
   if(remainder<10)
   {
      printf("%d",remainder);
   }
   else
   {
      printf("%c",remainder-10+'A');
   }
}