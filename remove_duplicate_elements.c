/*Write a program to remove all duplicate elements from an array.*/

#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,j,k,n;
   printf("\nEnter Array Limit : ");
   scanf("%d",&n);
   printf("\nEnter Array Elements :\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("\nOriginal Array is :\n");
   for(i=0;i<n;i++)
   {
      printf(" %d",a[i]);
   }
   printf("\n\nNew Array is :\n");
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;)
      {
         if(a[j]==a[i])
         {
            for(k=j;k<n;k++)
            {
               a[k]=a[k+1];
            }
            n--;
         }
         else
         {
            j++;
         }
      }
   }
   for(i=0;i<n;i++)
   {
      printf(" %d",a[i]);
   }
}