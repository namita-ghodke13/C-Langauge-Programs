/*Write a menu driven program to perform the following operations till the
user selects Exit.Accept appropriate data for each option.Use standard 
library functions from math.h
i.Sine    ii.Cosine    iii.log    iv.e^x    v.Square Root    vi.Exit
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int ch;
   float pr,n1,p,a,f,sqr,n3,n4;
   do
   {
      printf("\nMENU\n");
      printf("\n1.Sine \n2.Cosine \n3.Log \n4.e^x \n5.Square Root \n6.Exit\n");
      printf("\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1: printf("Enter Number : ");
                 scanf("%f",&n4);
                 printf("%.2f",sin(n4));
                 break;
         case 2: printf("Enter Number : ");
                 scanf("%f",&n4);
                 printf("%.2f",cos(n4));
                 break;
         case 3: printf("Enter Number : ");
                 scanf("%f",&n4);
                 printf("%.2f",log(n4));
                 break;
         case 4: printf("Enter Number and Power : ");
                 scanf("%f%f",&n1,&p);
                 printf("%.2f",pow(n1,p));
                 break;
         case 5: printf("Enter a Number : ");
                 scanf("%f",&a);
                 sqr=sqrt(a);
                 printf("%.2f",sqr);
                 break;
         case 6: exit(0);
                 break;
         default : printf("\nInvalid Choice...");
                   break;
      }
   }while(ch!=7);
}