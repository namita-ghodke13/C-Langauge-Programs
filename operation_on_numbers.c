/*Accept two numbers in variables x and y from the user and perform the 
following operations.
 Options                              Actions
1.Equality -                  Check if x is equal to y
2.Less Than -                 Check if x is less than y
3.Quotient and Remainder -    Divide x by y and display the quotient and 
                              remainder
4.Range -                     Accept a number and check if it lies between
                              x and y (both inclusive)
5.Swap -                      Interchange x and y
*/

#include<stdio.h>
int main()
{
   int x,y,ch,q,r,n,t;
   printf("Enter First Number : ");
   scanf("%d",&x);
   printf("Enter Second Number : ");
   scanf("%d",&y);
   printf("\n1-Equality");
   printf("\n2-Check if x is less than y or not");
   printf("\n3-Divide x by y and display the quotient and remainder");
   printf("\n4-Check Range");
   printf("\n5-Swap");
   printf("\nEnter Your Choice : ");
   scanf("%d",&ch);
   switch(ch)
   {
      case 1:if(x==y)
                printf("\n%d is equal to %d",x,y);
             else
                printf("\n%d is not equal to %d",x,y);
             break;
      case 2:if(x<y)
                printf("\n%d is less than %d",x,y);
             else
                printf("\n%d is not less than %d",x,y);
             break;
      case 3:q=x/y;
             r=x%y;
             printf("\nQuotient = %d",q);
             printf("\nRemainder = %d",r);
             break;
      case 4:printf("\nEnter Number : ");
             scanf("%d",&n);
             if(n>=x && n<=y)
                printf("\n%d lies in between %d and %d",n,x,y);
             else
                printf("\n%d is not lies in between %d and %d",n,x,y);
             break;
      case 5:printf("\nBefore Swap :\nx = %d \ny = %d",x,y);
             t=x;
             x=y;
             y=t;
             printf("\nAfter Swap :\nx = %d \ny = %d",x,y);
             break;
      default :printf("\nInvalid Choice");
               break;
   }
}