/*Accept inner and outer radius of a ring and print the perimeter and area
of the ring.(Hint: perimeter=2*3.14*(a+b),area=3.14*(a^2-b^2))*/

#include<stdio.h>
int main()
{
   float a,b,p,area;
   printf("Enter Inner Radius of Ring : ");
   scanf("%f",&a);
   printf("Enter Outer Radius of Ring : ");
   scanf("%f",&b);
   p=2*3.14*(a+b);
   area=3.14*(a*a-b*b);
   printf("Perimeter of Ring = %.2f",p);
   printf("\nArea of Ring = %.2f",area);
}