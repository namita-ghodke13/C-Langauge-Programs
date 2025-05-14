/*Write a function that accepts a character as parameter and returns 1 if it is an 
alphabet,2 if it is a digit and 3 if it is a special symbol. In main,accept characters
till the user enters EOF and use the function to count the total number of alphabets,
digits and special symbols entered.*/

#include<stdio.h>
void cal();
int main()
{
   cal();
}
void cal()
{
   char str[100];
   int digit,alpha,sp_char,space;
   int counter;
   digit=alpha=sp_char=space=0;
   printf("\nEnter String : ");
   gets(str);
   for(counter=0;str[counter]!=NULL;counter++)
   {
      if(str[counter]>='0' && str[counter]<='9')
          digit++;
      else if((str[counter]>='A' && str[counter]<='Z') || (str[counter]>='a' && str[counter]<='z'))
          alpha++;
      else if(str[counter]==' ')
          space++;
      else
          sp_char++;
   }
   printf("\nDigits = %d",digit);
   printf("\nAlphabets = %d",alpha);
   printf("\nSpaces = %d",space);
   printf("\nSpecial Characters = %d",sp_char);
}