/*Pascal's triangle is a geometric arrangement of the binomial coefficients in a 
triangle. It is named after Blaise Pascal. Write a program to display n lines of the
triangle.
                       1
                    1     1
                 1     2     1
              1     3     3     1
           1     4     6     4     1
        1     5     10    10    5     1
     1     6     15    20    15    6     1
*/

#include<stdio.h>
int fun(int y)
{
   int z,result=1;
   for(z=1;z<=y;z++)
      result=result*z;
   return (result);
}
int main()
{
   int x,y,z;
   printf("\nEnter Number of Rows in Pascal's Triangle : ");
   scanf("%d",&y);
   for(x=0;x<y;x++)
   {
      for(z=0;z<=(y-x-2);z++)
          printf(" ");
      for(z=0;z<=x;z++)
      {
         printf(" %d",fun(x)/(fun(z)*fun(x-z)));
      }
      printf("\n");
   }
   return 0;
}