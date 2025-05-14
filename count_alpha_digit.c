/*Write a program to accept characters till the user enters EOF and count 
number of alphabets and digits entered.*/

#include<stdio.h>
int main()
{
   char str[100];
   int alp,digit,splch,i;
   alp=digit=splch=i=0;
   printf("Enter String : ");
   gets(str);
   while(str[i]!='\0')
   {
      if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z'))
      {
         alp++;
      }
      else if(str[i]>='0' && str[i]<='9')
      {
         digit++;
      }
      else
      {
         splch++;
      }
      i++;
   }
   printf("\nAlphabets Count = %d",alp);
   printf("\nDigits Count = %d",digit);
   printf("\nSpecial Characters or Space Count = %d",splch);
}