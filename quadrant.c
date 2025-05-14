/*Accept the x and y coordinate of a point and find the quadrant in which
the point lies.*/

#include<stdio.h>
int main()
{
   int x,y;
   printf("Enter Value of X : ");
   scanf("%d",&x);
   printf("Enter Value of Y : ");
   scanf("%d",&y);
   if(x>0 && y>0)
      printf("\nPoint (%d,%d) lies in First Quadrant",x,y);
   else if(x<0 && y>0)
      printf("\nPoint (%d,%d) lies in Second Quadrant",x,y);
   else if(x<0 && y<0)
      printf("\nPoint (%d,%d) lies in Third Quadrant",x,y);
   else if(x>0 && y<0)
      printf("\nPoint (%d,%d) lies in Fourth Quadrant",x,y);
   else if(x==0 && y==0)
      printf("\nPoint (%d,%d) lies at the Origin",x,y);
}