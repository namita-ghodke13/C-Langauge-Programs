/*Write a menu driven program to perform the following operations on a 
character type variable.
i.Check if it is an alphabet.
ii.Check if it is a digit.
iii.Check if it is lowercase.
iv.Check if it is uppercase.
v.Convert it to uppercase.
vi.Convert it to lowercase.
*/

#include<stdio.h>
#include<ctype.h>
int main()
{
   int ch;
   char c;
   printf("Enter Character : ");
   scanf("%c",&c);
   do
   {
      printf("\nMENU\n");
      printf("\n1-Check if it is an alphabet.");
      printf("\n2-Check if it is a digit.");
      printf("\n3-Check if it is lowercase.");
      printf("\n4-Check if it is uppercase.");
      printf("\n5-Convert it to uppercase.");
      printf("\n6-Convert it to lowercase.\n");
      printf("\nEnter Your Choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:if(isalpha(c))
                    printf("\nCharacter is Alphabet.");
                 else
                    printf("\nCharacter is not Alphabet.");
                 break;
          case 2:if(isdigit(c))
                    printf("\nCharacter is Digit.");
                 else
                    printf("\nCharacter is not Digit.");
                 break;
          case 3:if(islower(c))
                    printf("\nCharacter is in Lowercase.");
                 else
                    printf("\nCharacter is not in Lowercase.");
                 break;
          case 4:if(isupper(c))
                    printf("\nCharacter is in Uppercase.");
                 else
                    printf("\nCharacter is not Uppercase.");
                 break;
          case 5:if(islower(c))
                    c=toupper(c);
                    printf("\nUppercase : %c",c);
                 break;
          case 6:if(isupper(c))
                    c=tolower(c);
                    printf("\nLowercase : %c",c);
                 break;
          default :printf("\nInvalid Choice...");
                   break;
      }
   } while (ch<7);
   
}