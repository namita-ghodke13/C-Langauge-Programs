/*A task takes 4 1/2 hours to complete. Two workers, A and B start working 
on it and take turns alternately. A works for 25 minutes at a time and is 
paid Rs 50, B works for 75 minutes at a time and is paid Rs.150. Display
the total number of turns taken by A and B, calculate their total amounts
and also the total cost of the task.*/

#include<stdio.h>
int main()
{
   float total_time_hours=4.5,tot_time_work=0,total_pay_A=0,total_pay_B=0;
   float total_time_min=total_time_hours*60;
   int time_A=25,time_B=75,pay_A=50,pay_B=150,turn_A=0,turn_B=0;
   while(tot_time_work<total_time_min)
   {
      if(tot_time_work+time_A<=total_time_min)
      {
         tot_time_work += time_A;
         turn_A++;
         total_pay_A += pay_A;
      }
      else
      {
         break;
      }
      if(tot_time_work + time_B <= total_time_min)
      {
         tot_time_work += time_B;
         turn_B++;
         total_pay_B += pay_B;
      }
      else
      {
         break;
      }
   }
   printf("Total turns taken by A : %d\n",turn_A);
   printf("Total turns taken by B : %d\n",turn_B);
   printf("Total amount paid to A : Rs.%.2f\n",total_pay_A);
   printf("Total amount paid to B : Rs.%.2f\n",total_pay_B);
   printf("Total Cost of the task : Rs.%.2f\n",total_pay_A+total_pay_B);
}