/*Write a program to merge two sorted arrays into a third array such that the third
array is also in the sorted order.
a1     10   25   90
a2     9    16   22   26   100
------------------------------------------------
a3     9    10   16   22   25   26   90   100
------------------------------------------------
*/

#include<stdio.h>
int main()
{
   int n1,n2,i,j,k;
   printf("\nEnter Size of First Sorted Array : ");
   scanf("%d",&n1);
   int a1[n1];
   printf("\nEnter %d Elements in First Sorted Array :\n",n1);
   for(i=0;i<n1;i++)
   {
      scanf("%d",&a1[i]);
   }
   printf("\nEnter Size of Second Sorted Array : ");
   scanf("%d",&n2);
   int a2[n2];
   printf("\nEnter %d Elements in Second Sorted Array :\n",n2);
   for(i=0;i<n2;i++)
   {
      scanf("%d",&a2[i]);
   }
   int a3[n1+n2];
   i=0,j=0,k=0;
   while(i<n1 && j<n2)
   {
      if(a1[i]<a2[j])
         a3[k++]=a1[i++];
      else
         a3[k++]=a2[j++];
   }  
   while (i<n1)
      a3[k++]=a1[i++];
   while(j<n2)
      a3[k++]=a2[j++];

   printf("\nMerged Sorted Array :\n");
   for(i=0;i<n1+n2;i++)
   {
      printf("%d\t",a3[i]);
   }
   return 0;
}