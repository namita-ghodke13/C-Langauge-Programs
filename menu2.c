/*Accept two complex numbers from the user(real part,imaginary part).Write 
a menu driven program to perform the following operations till the user 
selects Exit.
i.ADD    ii.SUBSTRACT    iii.MULTIPLY    iv.EXIT
*/

#include<stdio.h>
#include<conio.h>
int main()
{
   int n1,d1,n2,d2,ch;
   float ans;
   printf("\nEnter Numerator and Denominator of First Number : ");
   scanf("%d%d",&n1,&d1);
   printf("\nEnter Numerator and Denominator of Second Number : ");
   scanf("%d%d",&n2,&d2);
   printf("\n1-Add \n2-Substract \n3-Multiply \n4-Exit");
   while(ch!=4)
   {
      printf("\n\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:ans=(n1*d1+d1*n2)/d1*d2;
                printf("\nAddition is %f",ans);
                break;
         case 2:ans=(n1*d1-d1*n2)/d1*d2;
                printf("\nSubstraction is %f",ans);
                break;
         case 3:ans=(n1*n2)/d1*d2;
                printf("\nMultiplication is %f",ans);
                break;
      }
   }
}