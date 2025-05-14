/*Write a program which accepts a number and checks if the number is a
palindrome (Hint : number = reverse of number)
Example : number = 3472 Output : It is not a palindrome 
          number = 262  Output : It is a palindrome
*/

#include<stdio.h>
int main()
{
   int n,r=0,d,n1;
   printf("Enter Number : ");
   scanf("%d",&n);
   n1=n;
   while(n!=0)
   {
      d=n%10;
      r=r*10+d;
      n=n/10;
   }
   if(n1==r)
      printf("\n%d is a Palindrome",n1);
   else 
      printf("\n%d is not a Palindrome",n1);
}