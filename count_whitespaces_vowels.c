/*Write a program that contains the function iswhitespace returns 1 if its character
parameter is a space,tab or newline character. The program accepts characters till the 
user enters EOF and counts the number of white spaces.And also Modify the function such
that it returns 1 if the character is a vowel. Also count the total number of vowels
entered.*/

#include<stdio.h>
int iswhitespace_or_vowel(char ch);
void main()
{
   char ch;
   int wspace_count=0,vowel_count=0;
   printf("\nEnter the characters. Type CTRL + Z to terminate : ");
   while((ch=getchar())!=EOF)
   {
      if(ch==' '||ch=='\t'||ch=='\n')
         wspace_count++;
      else if(iswhitespace_or_vowel(ch))
         vowel_count++;
   }
   printf("\nThe total number of White Spaces = %d",wspace_count);
   printf("\nThe total number of Vowels = %d",vowel_count);
}
int iswhitespace_or_vowel(char ch)
{
   switch(ch)
   {
      case 'A': case 'E': case 'I': case 'O': case 'U': 
      case 'a': case 'e': case 'i': case 'o': case 'u':
      return 1;
      default:return 0;
   }
}