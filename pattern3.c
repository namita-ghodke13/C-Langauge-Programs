/*Modify the sample program 1 to display n lines as follows (here n=4).
  A   B   C   D
  E   F   G 
  H   I   
  J
*/

#include<stdio.h>
int main()
{
   int i,j;
   char a=65;
   for(i=0;i<4;i++)
   {
      for(j=i;j<4;j++)
      {
         printf("%c ",a);
         a++;
      }
      printf("\n");
   }
}