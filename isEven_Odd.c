/*Write a function isEven, which accepts an integer as parameter and returns 1 if the 
number is even, and 0 otherwise.Use this function in main to accept n numbers and check 
if they are even or odd.*/

#include<stdio.h>
int isEven(int num);
void main()
{
   int num,ans;
   printf("\nEnter Number : ");
   scanf("%d",&num);
   ans=isEven(num);
   if(ans==1)
   {
      printf("\nNumber is Even");
   }
   if(ans==0)
   {
      printf("\nNumber is Odd");
   }
}
int isEven(int num1)
{
   if(num1%2==0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}