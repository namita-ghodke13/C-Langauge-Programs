/*Accept the three positive integers for date from the user (day,month and 
year) and check whether the date is valid or invalid.Run your program for
the following dates and fill the table.(Hint: For valid date 1<=month<=12,
1<=day<=no-of-days where no-of-days is 30 in case of months 4,6,9 and 11.
31 in case of months 1,3,5,7,8,10 and 12.In case of month 2 no-of-days is 28
or 29 depending on year is leap or not)
    Date             Output
 12-10-1984           Valid
 32-10-1920          Invalid
 10-13-1984          Invalid
  29-2-1984           Valid
  29-2-2003          Invalid
  29-2-1900          Invalid 
*/

#include<stdio.h>
int main()
{
   int d,m,y;
   int daysinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   int l=0;
   printf("Enter Date - DD/MM/YYYY : ");
   scanf("%d/%d/%d",&d,&m,&y);
   if(y%400==0||(y%100!=0 && y%4==0))
      daysinmonth[1]=29;
   if(m<13)
   {
      if(d<=daysinmonth[m-1])
        l=1;
   }
   if(l==1)
      printf("\nDate is Valid");
   else
      printf("\nDate is Invalid");
}

