/*Write a simple menu driven program for a shop,which sells the following
items.The user selects items using a menu.For every item selected,ask the
quantity.If the quantity of any item is more than 10,give a discount of _%.
When the user selects Exit,display the total amount.*/

#include<stdio.h>
int main()
{
   int ch,qty;
   float total=0.0,price=0.0,discount=0.0;
   const float discount_rate=0.10;
   while(1)
   {
      printf("\nWelcome to the Shop\n");
      printf("\n1. Apple - $2.00 each\n");
      printf("2. Banana - $1.00 each\n");
      printf("3. Milk - $3.00 each\n");
      printf("4. Bread - $2.50 each\n");
      printf("5. Exit\n");
      printf("\n\nEnter Your Choice : ");
      scanf("%d",&ch);
      if(ch==5)
      {
         break;
      }
      switch(ch)
      {
         case 1:price=2.0;
                break;
         case 2:price=1.0;
                break;
         case 3:price=3.0;
                break;
         case 4:price=2.5;
                break;
         default:printf("\nInvalid Choice. Try again.\n");
                 continue;
      }
      printf("Enter Quantity : ");
      scanf("%d",&qty);
      float item_total=price*qty;
      if(qty>10)
      {
         discount=item_total*discount_rate;
         item_total-=discount;
         printf("Discount of %.0f%% applied!\n",discount_rate*100);
      }
      total+=item_total;
      printf("Item added to Bill. Current Total : $%.2f\n",total);
   }
   printf("\nThank you for Shopping! Your total amount is : $%.2f\n",total);
}