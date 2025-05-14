/*Write a menu driven program to perform the following operations using the Taylor 
series. Accept suitable data for each option. Write separate functions for each option.
                   ∞   
a. e^x      e^x =  ∑   x^n/n! = 1+x+(x^2/2!)+(x^3/3!)+...  for all x
                  n=0

                      ∞
b. sin(x)    sin x =  ∑ ((-1)^n/(2n+1)!)*x^(2n+1) = x-(x^3/3!)+(x^5/5!)- ... for all x 
                     n=0

                      ∞
c. cos(x)    cos x =  ∑ ((-1)^n/(2n)!)*x^(2n) = 1-(x^2/2!)+(x^4/4!)- ... for all x 
                     n=0

Define separate functions to calculate x^y and n! and use them in each function.
*/

#include<stdio.h>
double power(double x,int y)
{
   double result=1;
   for(int i=0;i<y;i++)
   {
      result *= x;
   }
   return result;
}
long long factorial(int n)
{
   long long fact=1;
   for(int i=1;i<=n;i++)
   {
      fact *= i;
   }
   return fact;
}
double calculate_exp(double x)
{
   double sum=1.0;
   for(int n=1;n<=10;n++)
   {
      sum += power(x,n)/factorial(n);
   }
   return sum;
}
double calculate_sin(double x)
{
   double sum=0.0;
   for(int n=0;n<=10;n++)
   {
      double term=power(-1,n)*power(x,2*n+1)/factorial(2*n+1);
      sum += term;
   }
   return sum;
}
double calculate_cos(double x)
{
   double sum=0.0;
   for(int n=0;n<=10;n++)
   {
      double term=power(-1,n)*power(x,2*n)/factorial(2*n);
      sum += term;
   }
   return sum;
}
int main()
{
   int ch;
   double x;
   do
   {
      printf("\nMenu : \n");
      printf("1. Calculate e^x\n");
      printf("2. Calculate sin(x)\n");
      printf("3. Calculate cos(x)\n");
      printf("4. Exit\n");
      printf("\nEnter Your Choice : ");
      scanf("%d",&ch);
      if(ch>=1 && ch<=3)
      {
         printf("\nEnter value of x : ");
         scanf("%lf",&x);
      }
      switch(ch)
      {
         case 1:printf("e^%.2lf = %.6lf\n",x,calculate_exp(x));
                break;
         case 2:printf("sin(%.2lf) = %.6lf\n",x,calculate_sin(x));
                break;
         case 3:printf("cos(%.2lf) = %.6lf\n",x,calculate_cos(x));
                break;
         case 4:printf("\nExiting Program.\n");
                break;
         default:printf("\nInvalid Choice ! Please try again.\n");
      }
   } while (ch!=4);
   return 0;
}
















