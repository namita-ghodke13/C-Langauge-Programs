/*A cashier has currency notes of denomination 1,5 and 10.Accept the amount
to be withdrawn from the user and print the total number of currency notes 
of each denomination the cashier will have to give.*/

#include<stdio.h>
int main()
{
   int rs,ten,five,one;
   printf("Enter Rupees : ");
   scanf("%d",&rs);
   ten=rs/10;
   rs=rs%10;
   five=rs/5;
   rs=rs%5;
   one=rs/1;
   rs=rs%1;
   printf("\nOne Rupees Notes = %d",one);
   printf("\nFive Rupees Notes = %d",five);
   printf("\nTen Rupees Notes = %d",ten);
}