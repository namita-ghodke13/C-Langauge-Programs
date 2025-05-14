/*Write a program to accept n numbers in an array and display the largest and smallest
number. Using these values, calculate the range of elements in the array.*/

#include<stdio.h>
int main()
{
   int a[20],n;
   void accept(int a[20],int n);
   void display(int a[20],int n);
   int maximum(int a[20],int n);
   int minimum(int a[20],int n);
   int range(int a[20],int n);

   printf("\nEnter Size of Array : ");
   scanf("%d",&n);
   accept(a,n);
   display(a,n);
   printf("\n\nMaximum Number = %d\n",maximum(a,n));
   printf("\n\nMinimum Number = %d\n",minimum(a,n));
   printf("\nRange = %d\n",range(a,n));
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
int maximum(int a[20],int n)
{
   int i,max=a[0];
   for(i=1;i<n;i++)
      if(a[i]>max)
        max=a[i];
   return max;
}
int minimum(int a[20],int n)
{
   int i,min=a[0];
   for(i=1;i<n;i++)
      if(a[i]<min)
        min=a[i];
   return min;
}
int range(int a[20],int n)
{
   int max=maximum(a,n);
   int min=minimum(a,n);
   return (max-min);
}