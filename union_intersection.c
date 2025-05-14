/*Write a program to find the union and intersection of the two sets of integers (store
it in two arrays).*/

#include<stdio.h>
#include<math.h>
void main()
{
   int i,k=0,x[10],y[10],c[25],j,n,n1,d[25],f=0;
   printf("\nHow many Elements in Set 1 : ");
   scanf("%d",&n);
   printf("\nEnter 1st Set Elements :\n");
   for(i=0;i<n;i++)
   {
      scanf("%d",&x[i]);
   }
   printf("\nHow many Elements in Set 2 : ");
   scanf("%d",&n1);
   printf("\nEnter 2nd Set Elements :\n");
   for(i=0;i<n1;i++)
   {
      scanf("%d",&y[i]);
   }
   for(i=0;i<n;i++)
   {
      c[k]=x[i];
      k++;
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<n1;j++)
      {
         if(y[i]==x[j])
            break;
      }
      if(j==n)
      {
         c[k]=y[i];
         k++;
      }
   }
   printf("\nThe Union Set is : { ");
   for(i=0;i<k;i++)
      printf("%d ",c[i]);
   printf(" }\n");
   for(j=0;j<n;j++)
   {
      for(i=0;i<n1;i++)
      {
         if(y[i]==x[j])
            break;
      }
      if(i!=n1)
      {
         d[f]=y[i];
         f++;
      }
   }
   printf("\nThe Intersection Set is : { ");
   for(i=0;i<f;i++)
      printf("%d ",d[i]);
   printf(" }");
}