/*Write a program to accept characters from the user till the user enters *
and count the number of characters, words and lines entered by the user.
(Hint : Use a flag to count words.Consider delimeters like \n \t ,;.and 
space for counting words)
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
   char ch;
   int c=0,w=0,l=0,flag=0;
   printf("Enter Characters (End input with '*') :\n");
   while((ch=getchar())!='*')
   {
      c++;
      if(ch=='\n')
      {
          l++;
      }
      if(ch==' '||ch=='\n'||ch=='\t'||ch==','||ch==';'||ch=='.')
      {
        if(flag)
        {
            w++;
            flag=0;
        }
      }
      else
      {
        flag=1;
      }
   }
   if(flag)
   {
      w++;
   }
   printf("\nCharacters : %d\n",c-1);
   printf("\nWords : %d\n",w);
   printf("\nLines : %d\n",l);
}