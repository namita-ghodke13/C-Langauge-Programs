/*Accept two integers x and y and calculate the sum of all integers between
x and y (both inclusive).*/

#include<stdio.h>
int main()
{
   int x=1,y=0,total_sum=0;
   while(x>y)
   {
      printf("The Second Number Should be bigger than the First one.\n");
      printf("Enter First Number : ");
      scanf("%d",&x);
      printf("Enter Second Number : ");
      scanf("%d",&y);
   }
   while(x<=y)
   {
      total_sum += x;
      x++;
   }
   printf("Total Sum Between x and y (both inclusive) = %d\n",total_sum);
}