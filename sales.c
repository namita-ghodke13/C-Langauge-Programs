/*Write a program to accept quantity and rate for three items,compute the 
total sales amount,Also compute and print the discount as follows :
(amount > __ 20% discount,amount between __ to __ 15% discount,amount
between -__ to __ 8% discount)*/

#include<stdio.h>
int main()
{
   int total,qty1,qty2,qty3,price1,price2,price3,discount,t1,t2,t3;
   printf("Enter Keyboard Quantity : ");
   scanf("%d",&qty1);
   printf("Enter Keyboard Price : ");
   scanf("%d",&price1);
   t1=qty1*price1;
   printf("Enter Mouse Quantity : ");
   scanf("%d",&qty2);
   printf("Enter Mouse Price : ");
   scanf("%d",&price2);
   t2=qty2*price2;
   printf("Enter Gamepad Quantity : ");
   scanf("%d",&qty3);
   printf("Enter Gamepad Price : ");
   scanf("%d",&price3);
   t3=qty3*price3;
   total=t1+t2+t3;
   printf("\nTotal = %d",total);
   if(total>7000)
   {
      discount=(total*0.2);
      total=total-discount;
   }
   else if(total<=7000 && total>5000)
   {
      discount=(total*0.15);
      total=total-discount;
   }
   else if(total<=5000)
   {
      discount=(total*0.08);
      total=total-discount;
   }
   printf("\nDiscount = %d",discount);
   printf("\nTotal Expense is Rs = %d",total);
}