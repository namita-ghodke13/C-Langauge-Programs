/*Write a program to accept characters till the user enters EOF and count 
number of times 'a' is entered.*/

#include<stdio.h>
int main()
{
   char ch;
   int count=0;
   printf("Enter Characters : ");
   while((ch=getchar())!=EOF)
   {
      if(ch=='a'|| ch=='A')
          count++;
   }
   printf("\nTotal Count of 'a' Characters = %d",count);
}