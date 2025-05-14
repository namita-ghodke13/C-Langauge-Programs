/*Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and 
Kevin(K).(Hint: C=5/9(F-32),K=C+273.15)*/

#include<stdio.h>
int main()
{
   float F,C,K;
   printf("Enter Temperature in Fahrenheit (F) : ");
   scanf("%f",&F);
   C=(float)5/9*(F-32);
   K=C+273.15;
   printf("Temperature in Celsius = %.2f",C);
   printf("\nTemperature in Kelvin = %.2f",K);
}