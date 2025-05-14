/*Write a program having menu that has three options - add,substract or
multiply two fractions.The two fractions and the options are taken as input
and the result is displayed as output.Each fraction is read as two integers,
numerator and denominator.*/

#include<stdio.h>
int main()
{
   int a,b,c,d,ch,nu,de;
   printf("Enter First Fraction - ");
   printf("\nNumerator : ");
   scanf("%d",&a);
   printf("Denominator : ");
   scanf("%d",&b);
   printf("Enter Second Fraction - ");
   printf("\nNumerator : ");
   scanf("%d",&c);
   printf("Denominator : ");
   scanf("%d",&d);
   printf("\n1-Addition \n2-Substraction \n3-Multiplication");
   printf("\nEnter Your Choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:nu=(a*d)+(c*b);
             de=(b*d);
             printf("\nAddition = %d/%d",nu,de);
             break;
      case 2:nu=(a*d)-(c*b);
             de=(b*d);
             printf("\nSubstraction = %d/%d",nu,de);
             break;
      case 3:nu=(a*c);
             de=(b*d);
             printf("\nMultiplication = %d/%d",nu,de);
             break;
   }
}