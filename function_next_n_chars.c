/*Write a function, which accepts a character and integer n as parameter and displays 
the next n characters.*/

#include<stdio.h>
int display(char);
int main()
{
   char ch,c;
   printf("\nEnter Character : ");
   scanf("%c",&ch);
   display(ch);
}
int display(char ch)
{
   int n,i;
   printf("\nHow many next characters : ");
   scanf("%d",&n);
   printf("You entered : \t%c\n",ch);
   printf("Next Characters : ");
   for(i=0;i<n;i++)
   {
      ch=ch+1;
      printf("\t%c",ch);
   }
}