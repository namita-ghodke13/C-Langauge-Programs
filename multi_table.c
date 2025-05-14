/*Write a program to display multiplication tables from to having n 
multiples each. The output should be displayed in a tabular format.
For example, the multiplication tables of 2 to 9 having 10 multiples each
is shown below.
2*1 = 2    3*1 = 3 .......... 9*1 = 9
2*2 = 4    3*2 = 6 .......... 9*2 = 18
.......    .......
2*10 = 20  3*10 = 30 ........ 9*10 = 90
*/

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,a,b,temp;
   printf("Enter First Number : ");
   scanf("%d",&a);
   printf("Enter Last Number : ");
   scanf("%d",&b);
   if(a>b)
   {
      temp=a;
      a=b;
      b=temp;
   }
   printf("\nMultiplication Table from %d to %d -\n\n",a,b);
   for(i=1;i<=10;i++)
   {
      for(j=a;j<=b;j++)
      {
         printf("%d*%d=%d\t",j,i,i*j);
      }
       printf("\n");
   }
}