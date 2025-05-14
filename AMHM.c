/*Accept two numbers and print arithmetic and harmonic mean of the two 
numbers.(Hint: AM=(a+b)/2,HM=ab/(a+b))*/

#include<stdio.h>
int main()
{
   int a,b;
   float AM,HM;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   AM=(a+b)/2;
   HM=a*b/(a+b);
   printf("Airthmetic Mean = %.1f",AM);
   printf("\nHarmonic Mean = %.1f",HM);
}