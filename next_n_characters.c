/*Write a program to accept a character,an integer n and display the next n
characters.*/

#include<stdio.h>
int main()
{
   int n,i=1;
   char ch;
   printf("Enter Character : ");
   scanf("%c",&ch);
   printf("Enter Limit : ");
   scanf("%d",&n);
   while(i<=n)
   {
      ch=ch+1;
      if(ch=='z'||ch=='Z')
      {
         printf("\nLarge Limit...");
         i=n;
      }
      else
      {
         printf("%c\t",ch);
         i++;
      }
   }
}