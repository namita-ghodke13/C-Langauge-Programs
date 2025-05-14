/*Accept the x and y coordinates of two points and compute the distance 
between the two points.*/

#include<stdio.h>
#include<math.h>
int main()
{
   float x1,x2,y1,y2,d;
   printf("Enter Coordinates of Point X - ");
   printf("\nEnter x1 : ");
   scanf("%f",&x1);
   printf("Enter x2 : ");
   scanf("%f",&x2);
   printf("Enter Coordinates of Point Y - ");
   printf("\nEnter y1 : ");
   scanf("%f",&y1);
   printf("Enter y2 : ");
   scanf("%f",&y2);
   d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
   printf("\nDistance Between X and Y Coordinates = %.2f",d);
}