/*Write a program to calculates the area of a circle using a function and uses this 
function to calculate the area of a cylinder using another function.Add another 
function to calculate the volume of sphere and display it.*/

#include<stdio.h>
void main()
{
   float areacircle(float r);
   float areacylinder(float r,int h);
   float volumesphere(float r);
   float area,r,volume;
   int h;
   printf("\nEnter Radius : ");
   scanf("%f",&r);
   area=areacircle(r);
   printf("\nArea of Circle = %6.2f\n",area);
   
   printf("\nEnter Height : ");
   scanf("%d",&h);
   area=areacylinder(r,h);
   printf("\nArea of Cylinder = %6.2f\n",area);

   volume=volumesphere(r);
   printf("\nVolume of Sphere = %6.2f\n",volume);
}
float areacircle(float r)
{
   const float pi=3.142;
   return (pi*r*r);
}
float areacylinder(float r,int h)
{
   return 2*areacircle(r)*h;
}
float volumesphere(float r)
{
   const float pi=3.142;
   return (float)(4/3)*pi*areacircle(r)*areacircle(r)*areacircle(r);
}