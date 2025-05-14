/*Accept the time as hour,minute and seconds and check whether the time is 
valid.(Hint: 0<=hour<24,0<=minute<60,0<=second<60)*/

#include<stdio.h>
int main()
{
   int h,m,s;
   printf("Enter Time in format hh mm ss : ");
   scanf("%d%d%d",&h,&m,&s);
   if((h>=0&&h<24)&&(m>=0&&m<60)&&(s>=0&&s<60))
      printf("Time is Valid");
   else
      printf("Time is Invalid");
}