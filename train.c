/*A train leaves station A at 4.00 a.m and travels at 80kmph. After every 30 
minutes, it reaches a station where it halts for 10 minutes. It reaches 
its final destination B at 1.00 p.m. Display a table showing its arrival 
and departure time at every intermediate station. Also calculate the total
distance between A and B.*/

#include<stdio.h>
int main()
{
   int starthour=4,startmin=0;
   int endhour=13,endmin=0;
   int halttime=10;
   int travel_interval=30;
   int speed=80;
   int tot_dist=0;
   int tot_min,tra_period,dist_bet_stat,i,arr_hour,arr_min,depHour,depMin;
   tot_min=(endhour-starthour)*60+(endmin=startmin);
   tra_period=tot_min/(travel_interval+halttime);
   dist_bet_stat=speed*travel_interval/60;
   printf("\nTrain Schedule -\n");
   printf("\n Station      Arrival Time     Departure Time\n");
   for(i=0;i<=tra_period;i++)
   {
      arr_hour=starthour+(i*(travel_interval+halttime))/60;
      arr_min=startmin+(i*(travel_interval+halttime))%60;

      depHour=arr_hour;
      depMin=arr_min+halttime;
      if(depMin>=60)
      {
         depMin=depMin-60;
         depHour++;
      }
      printf("\nStation %2d      %02d:%02d AM           %02d:%02d AM\n",i+1,arr_hour,arr_min,depHour,depMin);
      if(arr_hour==12 && arr_min>=0)
      {
         printf("PM\n");
      }
      tot_dist=tot_dist+dist_bet_stat;
   }
   printf("\nTotal Distance between A and B : %d km\n",tot_dist);
}