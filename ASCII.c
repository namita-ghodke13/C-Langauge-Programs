/*Accept a character from the user and display its ASCII value.*/

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter Character : ");
   scanf("%c",&ch);
   printf("ASCII Value of %c = %d",ch,ch);
}