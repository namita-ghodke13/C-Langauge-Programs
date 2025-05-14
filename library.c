/*A library charges a fine for every book returned late.Accept the number
of days the member is late,compute and print the fine as follows :
(less than five days Rs__fine,for 6 to 10 days Rs.__fine and above 10 days
Rs.__fine)*/

#include<stdio.h>
int main()
{
   int days,fine;
   printf("Number of Days late : ");
   scanf("%d",&days);
   if(days>0)
   {
      if(days<=5)
         fine = 5;
      else if(days>5 && days<=10)
         fine = 10;
      else if(days>10)
         fine = 20+days;
      printf("\nYou have to pay fine of Rs.%d",fine);
   }
   else
   {
      printf("Entered Days not Valid");
   }
}