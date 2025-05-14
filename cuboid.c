/*Accept three dimensions length(l),breadth(b),height(h) of a cuboid and 
print surface area and volume.(Hint:surface area=2(lb+lh+bh),volume=lbh)*/

#include<stdio.h>
int main()
{
   float l,b,h,a,v;
   printf("Enter Length : ");
   scanf("%f",&l);
   printf("Enter Breadth : ");
   scanf("%f",&b);
   printf("Enter Height : ");
   scanf("%f",&h);
   a=2*(l*b+l*h+b*h);
   v=l*b*h;
   printf("\nSurface Area of Cuboid = %.2f",a);
   printf("\nVolume of Cuboid = %.2f",v);
}