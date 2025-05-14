/*Write a program to check whether given character is a digit or a character
in lowercase or uppercase alphabet.(Hint: ASCII value of digit is between
48 to 58 and Lowercase characters have ASCII values in the range of 97 to 
122,uppercase is between 65 and 90)*/

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter Character : ");
   scanf("%c",&ch);
   if(ch>=48 && ch<=58)
      printf("\nCharacter is Digit");
   else if(ch>=97 && ch<=122)
      printf("\nCharacter is Lowercase");
   else if(ch>=65 && ch<=90)
      printf("\nCharacter is Uppercase");
}