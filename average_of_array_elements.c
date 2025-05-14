/*Write a program to accept n numbers in an array and calculate the average.*/
 
#include<stdio.h>
int main()
{
   int a[20],n;
   void accept(int a[20],int n);
   void display(int a[20],int n);
   float average(int a[],int n);

   printf("\nEnter Size of Array : ");
   scanf("%d",&n);
   accept(a,n);
   display(a,n);
   printf("\n\nAverage = %.2f\n",average(a,n));
}
void accept(int a[20],int n)
{
   int i;
   printf("\nEnter Elements of Array :\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
}
void display(int a[20],int n)
{
   int i;
   printf("\nArray Elements :\n");
   for(i=0;i<n;i++)
      printf("%d\t",a[i]);
}
float average(int a[20],int n)
{
   int sum=0,i;
   for(i=0;i<n;i++)
   {
      sum += a[i];
   }
   return (float)sum/n;
}