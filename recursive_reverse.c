/*Write a recursive C function to print the digits of a number in reverse order. Use 
this function in main to accept a number and print the digits in reverse order 
separated by tab.
Example : 3456
          6543
(Hint : Recursiveprint(n) = print n if n is single digit number
                          = print n % 10 + tab + Recursiveprint(n/10))  */

#include<stdio.h>
#include<math.h>
int rev(int,int);
int main()
{
   int num,result;
   int length=0,temp;
   printf("\nEnter Number : ");
   scanf("%d",&num);
   temp=num;
   while(temp!=0)
   {
      length++;
      temp=temp/10;
   }
   result=rev(num,length);
   printf("\nReverse Number = %d",result);
   return 0;
}
int rev(int num,int len)
{
   if(len==1)
   {
      return num;
   }
   else
   {
      return (((num%10)*pow(10,len-1))+rev(num/10,--len));
   }
}