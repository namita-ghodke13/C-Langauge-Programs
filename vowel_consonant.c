/*Accept a lowercase character from the user and check whether the character
is a vowel or consonant.(Hint: a,e,i,o,u are vowels)*/

#include<stdio.h>
#include<conio.h>
int main()
{
   char ch;
   printf("Enter Lowercase Character : ");
   scanf("%c",&ch);
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
      printf("\nCharacter is Vowel");
   else 
      printf("\nCharacter is Consonant");
}