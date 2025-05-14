/*Accept dimensions of a cylinder and print the surface area and volume.
(Hint: surface area = (2*3.14*r*r)+(2*3.14*r*h),volume=3.14*r*r*h)*/

#include<stdio.h>
int main()
{
   float r,h,a,v;
   printf("Enter Radius : ");
   scanf("%f",&r);
   printf("Enter Height : ");
   scanf("%f",&h);
   a=(2*3.14*r*r)+(2*3.14*r*h);
   v=3.14*r*r*h;
   printf("\nSurface Area of Cylinder = %.2f",a);
   printf("\nVolume of Cylinder = %.2f",v);
}