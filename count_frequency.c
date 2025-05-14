/*Write a program to accept n numbers in the range of 1 to 25 and count the frequency
of occurrence of each number.*/

#include<stdio.h>
int main()
{
   int n,num,i;
   printf("\nEnter Limit : ");
   scanf("%d",&n);
   int freq[26]={0};
   printf("\nEnter %d numbers (each between 1 to 25) :\n",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&num);
      if(num>=1 && num<=25)
      {
         freq[num]++;
      }
      else
      {
         printf("\nInvalid number %d! Please enter numbers between 1 and 25.\n",num);
         i--;
      }
   }
   printf("\nFrequency of each number :\n\n");
   for(i=1;i<=25;i++)
   {
      if(freq[i]>0)
      {
         printf("Number %d : %d times\n",i,freq[i]);
      }
   }
   return 0;
}