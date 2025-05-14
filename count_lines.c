/*Accept characters till the user enters EOF and count the number of lines
entered. Also display the length of the longest line. (Hint : A line ends
when the character is \n)*/

#include<stdio.h>
int main()
{
   int ch,linecount=0,maxlinelength=0,currentlinelen=0;
   char a[100];
   printf("Enter Characters : ");
   while((ch=getchar())!=EOF)
   {
      if(ch=='\n')
      {
         linecount++;
         if(currentlinelen>maxlinelength)
         {
            maxlinelength=currentlinelen;
         }
         currentlinelen=0;
      }
      else
      {
         currentlinelen++;
      }
   }
   if(currentlinelen>maxlinelength)
   {
      maxlinelength=currentlinelen;
   }
   printf("\nNumber of Lines : %d\n",linecount);
   printf("\nLength of the Longest Line = %d\n",maxlinelength);
}