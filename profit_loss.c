/*Accept the cost price and selling price from the keyboard.Find out if the 
seller has made a profit or loss and display how much profit or loss has 
been made.*/

#include<stdio.h>
int main()
{
   int cp,sp;
   float profit,loss;
   printf("Enter Cost Price : ");
   scanf("%d",&cp);
   printf("Enter Selling Price : ");
   scanf("%d",&sp);
   if(sp>cp)
   {
      profit=(sp-cp);
      printf("Seller has made Profit");
      printf("\nProfit = %.2f Rs.",profit);
   }
   else if(sp<cp)
   {
      loss=(cp-sp);
      printf("Seller has made Loss");
      printf("\nLoss = %.2f Rs.",loss);
   }
   else
   {
      printf("\nSeller has made nor Profit nor Loss");
   }
}