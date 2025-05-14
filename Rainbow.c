/*Write the program that accepts a char-type variable called colour and
displays appropriate colour name.*/

#include<stdio.h>
int main()
{
   char ch;
   printf("Enter Character : ");
   scanf("%c",&ch);
   switch(ch)
   {
      case 'V':printf("\nVIOLET");
               break;
      case 'I':printf("\nINDIGO");
               break;
      case 'B':printf("\nBLUE");
               break;
      case 'G':printf("\nGREEN");
               break;
      case 'Y':printf("\nYELLOW");
               break;
      case 'O':printf("\nORANGE");
               break;
      case 'R':printf("\nRED");
               break;
      default :printf("\nINVALID COLOUR");
               break;
   }
}