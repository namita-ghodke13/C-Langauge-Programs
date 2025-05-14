/*Write a recursive function for the following recursive definition. Use this function
in main to display the first 10 numbers of the following series.
   an = 3    if n = 1 or 2
   = 2* an-1 + 3* an-2  if n > 2 */

#include<stdio.h>
int series(int n)
{
   if(n==1 || n==2)
      return 3;
   else
      return 2*series(n-1)+3*series(n-2);
}
int main()
{
   int i;
   printf("\nFirst 10 numbers of series are :\n\n");
   for(i=1;i<=10;i++)
   {
      printf("%d ",series(i));
   }
   return 0;
}