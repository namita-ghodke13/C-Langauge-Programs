/*A magic square of order n is an arrangement of n^2 numbers, in a square, such that 
the n numbers in all rows, all columns, and both diagonals sum to the same constant.
A normal magic square contains the integers from 1 to n^2. The magic constant of a
magic square depends on n and is M(n) = (n^3+n)/2. For n=3,4,5, the constants are 15,34,
65 resp. Write a program to generate and display a magic square of order n.
                       2   7   6 → 15
                       9   5   1 → 15
                       4   3   8 → 15
                     ↙ ↓   ↓   ↓ ↘
               15  15  15  15  15
*/

#include<stdio.h>
int main()
{
   int n,i,j;
   printf("\nEnter an odd number for order of Magic Square (n) : ");
   scanf("%d",&n);
   if(n%2==0)
   {
      printf("\nOnly odd numbers are allowed.\n");
      return 1;
   }
   int magicSquare[n][n];
   for(i=0;i<n;i++)
      for(j=0;j<n;j++)
         magicSquare[i][j]=0;

   int num=1;
   i=0;
   j=n/2;
   while(num<=n*n)
   {
      magicSquare[i][j]=num;
      num++;
      int newi=(i-1+n)%n;
      int newj=(j+1)%n;

      if(magicSquare[newi][newj]!=0)
      {
         i=(i+1)%n;
      }
      else
      {
         i=newi;
         j=newj;
      }
   }

   printf("\nMagic Square of Order %d : \n",n);
   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
          printf("%3d ",magicSquare[i][j]);
      }
      printf("\n");
   }
   return 0;
}