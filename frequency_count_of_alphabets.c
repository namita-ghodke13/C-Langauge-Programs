/*Write a program to accept characters from the user till the user enters EOF and
calculate the frequency count of every alphabet. Display the alphabets and their count.
Input  : THIS IS A SAMPLE INPUT
Output : Character    Count
            T           2
            H           1
            I           3
            ....
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
   int freq[26]={0},i;
   char ch;
   printf("\nEnter Characters (Press Ctrl + Z to end input) :\n");
   while((ch=getchar())!=EOF)
   {
      if(isalpha(ch))
      {
         ch=toupper(ch);
         freq[ch-'A']++;
      }
   }
   printf("\nCharacter\tCount\n");
   for(i=0;i<26;i++)
   {
      if(freq[i]>0)
      {
         printf(" %c\t\t %d\n",'A'+i,freq[i]);
      }
   }
   return 0;
}