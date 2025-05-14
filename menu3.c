/*Accept x and y coordinates of two points and write a menu driven program
to perform the following operations till the user selects Exit.
i.Distance between points.
ii.Slope of line between the points.
iii.Check whether they lie in the same quadrant.
iv.EXIT
(Hint : Use formula m=(y2-y1)/(x2-x1) to calculate slope of line.)
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
int main()
{
   float x1,y1,x2,y2,ans;
   int ch;
   printf("\nEnter Point A : ");
   scanf("%f%f",&x1,&y1);
   printf("\nEnter Point B : ");
   scanf("%f%f",&x2,&y2);
   printf("\nMENU\n");
   printf("\n1-Distance between points.");
   printf("\n2-Slope of line between the points.");
   printf("\n3-Check whether they lie in the same quadrant.");
   printf("\n4-EXIT\n");
   while(ch!=4)
   {
      printf("\n\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
         case 1:ans=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
                ans=sqrt(ans);
                printf("\nDistance is %.2f",ans);
                break;
         case 2:ans=(y2-y1)/(x2-x1);
                printf("\nSlope is %.2f",ans);
                break;
         case 3:if(x1>0 && x2>0 &&y1>0 && y2>0)
                   printf("\nLie in the Same Quadrant and in First Quadrant.");
                else
                   printf("\nDoes not Lie in the Same Quadrant and in First Quadrant.");
                break;
         case 4:exit(0);
                break;
         default:printf("\nInvalid Choice...");
                 break;
      }
   }
}