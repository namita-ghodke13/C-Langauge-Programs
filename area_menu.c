/*Accept radius from the user and write a program having menu with the 
following options and corresponding actions.
 Options                                   Actions
1.Area of Circle -             Compute area of circle and print
2.Circumference of Circle -    Compute Circumference of circle and print
3.Volume of Sphere -           Compute Volume of Sphere and print
*/

#include<stdio.h>
int main()
{
   int ch;
   float r,a,c,v;
   do
   {
     printf("\n\nMENU");
     printf("\n1-Area of Circle");
     printf("\n2-Circumference of Circle");
     printf("\n3-Volume of Sphere");
     printf("\nEnter Your Choice : ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("Enter Radius : ");
              scanf("%f",&r);
              a=3.14*r*r;
              printf("\nArea of Circle = %.2f",a);
              break;
       case 2:printf("Enter Radius : ");
              scanf("%f",&r);
              c=2*3.14*r;
              printf("\nCircumference of Circle = %.2f",c);
              break;
       case 3:printf("Enter Radius : ");
              scanf("%f",&r);       
              v=(float)4/3*3.14*r*r*r;
              printf("\nVolume of Sphere = %.2f",v);
              break;
       default :printf("\nInvalid Choice");
                break;
     }
   }while(ch<4);
}