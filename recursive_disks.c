/*The "Towers of Hanoi" problem : The objective is to move a set of disks arranged in
increasing sizes from top to bottom from the source pole to a destination pole such
that they are in the same order as before using only one intermediate pole subject to 
the condition that 
i. Only one disk can be moved at a time.
ii. A bigger disk cannot be placed on a smaller disk.
Write a recursive function which displays all the steps to move n disks from A to C. */

#include<stdio.h>
void towersOfHanoi(int n,char source,char auxiliary,char destination)
{
   if(n==1)
   {
      printf("\nMove Disk 1 from %c to %c\n",source,destination);
      return;
   }
   towersOfHanoi(n-1,source,destination,auxiliary);
   printf("\nMove Disk %d from %c to %c\n",n,source,destination);
   towersOfHanoi(n-1,auxiliary,source,destination);
}
int main()
{
   int n;
   printf("\nEnter Number of Disks : ");
   scanf("%d",&n);
   printf("\nThe Sequence of Moves : \n");
   towersOfHanoi(n,'A','B','C');
   return 0;
}