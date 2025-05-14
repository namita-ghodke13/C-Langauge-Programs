/*Write a function to sort an array of n integers using Bubble sort method. Accept n 
numbers from the user, store them in an array and sort them using this function.
Display the sorted array.*/

#include<stdio.h>
#include<stdlib.h>
void bubblesort(int a[],int size);
void main()
{
   int a[50],n,i;
   printf("\nEnter size of Array : ");
   scanf("%d",&n);
   printf("\nEnter Array Elements :\n");
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);
   bubblesort(a,n);
   printf("\nSorted Array :\n");
   for(i=0;i<n;i++)
      printf("%d\t",a[i]);
}
void bubblesort(int a[],int size)
{
   int temp,i,j;
   for(i=0;i<size;i++)
   {
      for(j=0;j<size-1;j++)
      {
         if(a[j]>a[j+1])
         {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
      }
   }
}