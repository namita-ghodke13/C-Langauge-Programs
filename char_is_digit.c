/*Accept a character as input and check whether the character is a digit.
(Check if it is in the range '0' to '9' both inclusive)*/

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter Character : ");
   scanf("%c",&ch);
   if(ch>='0' && ch<='9')
      printf("\nCharacter is Digit");
   else
      printf("\nCharacter is not Digit");
}