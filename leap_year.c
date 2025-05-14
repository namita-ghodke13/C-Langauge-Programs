/*Accept any year as input through the keyboard.Write a program to check 
whether the year is a leap year or not.(Hint: Leap year is divisible by 4
and not by 100 or divisible by 400)*/

#include<stdio.h>
int main()
{
   int year;
   printf("Enter Year : ");
   scanf("%d",&year);
   if(((year%4==0)&&(year%100!=0))||(year%400==0))
   {
      printf("\n%d is Leap Year",year);
   }
   else
   {
      printf("\n%d is not Leap Year",year);
   }
}