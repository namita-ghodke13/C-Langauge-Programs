/*A Company has four branches, one in each zone : North,South,East and West.
For each of these branches, it collects sales information once every quarter
(four months) and calculates the average sales for each zone.Write a program
that accepts sales details for each quarter in the four branches and 
calculate the average sales of each branch.*/

#include<stdio.h>
#define branches 4
#define quarters 4 
int main()
{
   int i,j;
   float sales[branches][quarters],avgs[branches],sum;
   for(i=0;i<branches;i++)
   {
      printf("Enter Sales Data for Branch %d -\n",i+1);
      for(j=0;j<quarters;j++)
      {
         printf("Quarter %d : ",j+1);
         scanf("%f",&sales[i][j]);
      }
   }
   for(i=0;i<branches;i++)
   {
      sum=0;
      for(j=0;j<quarters;j++)
      {
         sum=sum+sales[i][j];
      }
      avgs[i]=sum/quarters;
   }
   printf("\nAverage Sales for Each Branch :\n");
   for(i=0;i<branches;i++)
   {
      printf("Branch %d : %.2f\n",i+1,avgs[i]);
   }
}