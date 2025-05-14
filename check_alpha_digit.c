/*Write a program,which accepts a character from the user and checks if it
is an alphabet,digit or punctuation symbol.If it is an alphabet,check if it
is uppercase or lowercase and then change the case.*/

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter Character : ");
    scanf("%c",&ch);
    if((ch>=65 && ch<=90 )||(ch>=97 && ch<=122))
    {
        printf("\nCharacter is an Alphabet.");
        if(isupper(ch))
        {
           printf("\nIt is Uppercase.");
           ch=tolower(ch);
           printf("\nLowercase : %c",ch);
        }
        else
        {
           printf("\nIt is Lowercase.");
           ch=toupper(ch);
           printf("\nUppercase : %c",ch); 
        }
    }
    if(ch>=48 && ch<=57)
    {
        printf("\n%c is Digit.",ch);
    }
    if((ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=33 && ch<=47) || (ch>=123 && ch<=126))
    {
        printf("\n%c is Punctuation Symbol.",ch);
    }
}