/*Write a recursive function for Binary Search, which accepts an array of n elements 
and a key as parameters and returns the position of key in the array and -1 if the key 
is not found. Accept n numbers from the user, store them in an array and sort the array. 
Accept the key to be searched and search it using this function. Display appropriate 
messages.*/

#include<stdio.h>
int binarySearch(int a[],int low,int high,int key)
{
   if(low>high)
      return -1;
   
   int mid=(low+high)/2;

   if(a[mid]==key)
      return mid;
   else if(key<a[mid])
      return binarySearch(a,low,mid-1,key);
   else
      return binarySearch(a,mid+1,high,key);
}
int main()
{
   int n,i,key,position;
   printf("\nEnter Number of Elements : ");
   scanf("%d",&n);
   int a[n];
   printf("\nEnter %d Sorted Elements :\n",n);
   for(i=1;i<=n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\nEnter Key to Search : ");
   scanf("%d",&key);
   position=binarySearch(a,0,n-1,key);
   if(position!=-1)
      printf("\nKey Found at Position %d\n",position);
   else
      printf("\nKey not Found in the Array\n");
   
   return 0;
}