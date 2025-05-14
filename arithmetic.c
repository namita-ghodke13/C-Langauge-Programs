/*Write a program,which accepts two integers and an operator as a character
(+ - * /),performs the corresponding operation and displays the result.*/

#include<stdio.h>
int main()
{
   int a,b;
   char c;
   printf("Enter Operator : ");
   scanf("%c",&c);
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Second Number : ");
   scanf("%d",&b);
   switch(c)
   {
      case '+':printf("\nAddition = %d",a+b);
               break;
      case '-':printf("\nSubstraction = %d",a-b);
               break;
      case '*':printf("\nMultiplication = %d",a*b);
               break;
      case '/':printf("\nDivision = %d",a/b);
               break;
      default :printf("\nInvalid Operator");
               break;  
   }
}