/*Write a function for Linear Search, which accepts an array of n elements and a key as
parameters and returns the position of key in the array and -1 if the key is not found.
Accept n numbers from the user, store them in an array. Accept the key to be searched
and search it using this function. Display appropriate messages.*/

#include<stdio.h>
int linearsearch(int arr[],int n,int key)
{
   int i;
   for(i=1;i<=n;i++)
   {
      if(arr[i]==key)
         return i;
   }
   return -1;
}
int main()
{
   int n,key,result,i;
   printf("\nEnter Limit : ");
   scanf("%d",&n);
   int arr[n];
   printf("\nEnter Elements :\n");
   for(i=1;i<=n;i++)
   {
      scanf("%d",&arr[i]);
   }
   printf("\nEnter Key to Search : ");
   scanf("%d",&key);
   result=linearsearch(arr,n,key);
   if(result!=-1)
      printf("\nKey %d found at position %d.\n",key,result);
   else
      printf("\nKey %d not found in the array.\n",key);

   return 0;
}