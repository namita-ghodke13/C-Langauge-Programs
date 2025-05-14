/*Write a program to accept n numbers from the user and store them in an array such
that the elements are in the sorted order. Display the array. Write separate functions
to accept and display the array. (Hint : Insert every number in its correct position 
in the array)*/

#include<stdio.h>
void accept(int arr[],int n)
{
   int i,j,key;
   for(i=0;i<n;i++)
   {
      printf("\nEnter Element %d : ",i+1);
      scanf("%d",&key);
      j=i-1;
      while(j>=0 && arr[j]>key)
      {
         arr[j+1]=arr[j];
         j--;
      }
      arr[j+1]=key;
   }
}
void display(int arr[],int n)
{
   int i;
   printf("\nSorted Array : ");
   for(i=0;i<n;i++)
   {
      printf("%d ",arr[i]);
   }
   printf("\n");
}
int main()
{
   int n;
   printf("\nEnter Number of Elements : ");
   scanf("%d",&n);
   int arr[n];
   accept(arr,n);
   display(arr,n);
   return 0;
}