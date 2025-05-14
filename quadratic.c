/*Write a program to calculate the roots of a quadratic equation.Consider
all possible cases.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   float a,b,c,root1,root2;
   float realp,imagp,disc;
   printf("Enter Value of a : ");
   scanf("%f",&a);
   printf("Enter Value of b : ");
   scanf("%f",&b);
   printf("Enter Value of c : ");
   scanf("%f",&c);
   if(a==0||b==0||c==0)
   {
      printf("Error : Roots cannot be determined");
      exit(1);
   }
   else
   {
      disc=b*b-4.0*a*c;
      if(disc<0)
      {
         printf("\nImaginary Roots\n");
         realp=-b/(2.0*a);
         imagp=sqrt(abs(disc))/(2.0*a);
         printf("\nRoot 1 = %f + %f\n",realp,imagp);
         printf("\nRoot 2 = %f - %f\n",realp,imagp);
      }
      else if(disc==0)
      {
         printf("Roots are real and equal\n");
         root1=-b/(2.0*a);
         root2=root1;
         printf("Root 1 = %.2f\n",root1);
         printf("Root 2 = %.2f\n",root2);
      }
      else if(disc>0)
      {  
         printf("Roots are real and distinct\n");
         root1=(-b+sqrt(disc))/(2.0*a);
         root2=(-b-sqrt(disc))/(2.0*a);
         printf("Root 1 = %.2f\n",root1);
         printf("Root 2 = %.2f\n",root2);
      }
   }
}