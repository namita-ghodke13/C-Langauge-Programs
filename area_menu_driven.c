/*Write a program having a menu with the following options and corresponding
actions.
 Options                                   Actions
1.Area of Square -         Accept length,Compute area of square and print
2.Area of Rectangle -      Accept length and breadth,Compute area of 
                           rectangle and print
3.Area of Triangle -       Accept base and height,Compute area of triangle 
                           and print
*/

#include<stdio.h>
int main()
{
   int ch;
   float s,a,l,b,h;
   do
   {
     printf("\n\nMENU");
     printf("\n1-Area of Square");
     printf("\n2-Area of Rectangle");
     printf("\n3-Area of Triangle");
     printf("\nEnter Your Choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("Enter Side : ");
              scanf("%f",&s);
              a=s*s;
              printf("\nArea of Square = %.2f",a);
              break;
       case 2:printf("Enter Length : ");
              scanf("%f",&l);
              printf("Enter Breadth : ");
              scanf("%f",&b);
              a=l*b;
              printf("\nArea of Rectangle = %.2f",a);
              break;
       case 3:printf("Enter Base : ");
              scanf("%f",&b);       
              printf("Enter Height : ");
              scanf("%f",&h);
              a=0.5*b*h;
              printf("\nArea of Triangle = %.2f",a);
              break;
       default :printf("\nInvalid Choice");
                break;
     }
   }while(ch<4);
}