/*Accept a single digit from the user and display it in words.For example,
if digit entered is 9,display Nine.*/

#include<stdio.h>
int main()
{
   int ch;
   printf("Enter Digit : ");
   scanf("%d",&ch);
   switch(ch)
   {
      case 0:printf("\nZERO");
               break;
      case 1:printf("\nONE");
               break;
      case 2:printf("\nTWO");
               break;
      case 3:printf("\nTHREE");
               break;
      case 4:printf("\nFOUR");
               break;
      case 5:printf("\nFIVE");
               break;
      case 6:printf("\nSIX");
               break;
      case 7:printf("\nSEVEN");
               break;
      case 8:printf("\nEIGHT");
               break;
      case 9:printf("\nNINE");
               break;
      default :printf("\nINVALID DIGIT");
               break;
   }
}