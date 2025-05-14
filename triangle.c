/*Accept three sides of triangle as input,and print whether the triangle is 
valid or not.(Hint: The triangle is valid if the sum of each of the two
sides is greater than the third side).*/

#include<stdio.h>
int main()
{
   int side1,side2,side3;
   printf("Enter three sides of Triangle - ");
   printf("\nEnter Side 1 : ");
   scanf("%d",&side1);
   printf("Enter Side 2 : ");
   scanf("%d",&side2);
   printf("Enter Side 3 : ");
   scanf("%d",&side3);
   if((side1+side2)>side3)
   {
      if((side2+side3)>side1)
      {
         if((side1+side3)>side2)
         {
            printf("\nTriangle is Valid");
         }
         else
         {
            printf("\nTriangle is not Valid");
         }
      }
      else
      {
         printf("\nTriangle is not Valid");
      }
   }
   else
   {
      printf("\nTriangle is not Valid");
   }
}