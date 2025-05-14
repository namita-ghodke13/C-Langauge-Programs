/*Write a program to accept marks for three subjects and find the total 
marks secured,average and also display the class obtained.(Class I - above
__ %,class II - __% to __%,pass class - __% to __% and fail otherwise)*/

#include<stdio.h>
int main()
{
   int m1,m2,m3,total;
   float per;
   printf("Enter Three Subjects Marks : ");
   scanf("%d%d%d",&m1,&m2,&m3);
   total=m1+m2+m3;
   per=total*100/300;
   printf("\nTotal = %d",total);
   printf("\nPercentage = %.2f",per);
   if(per>75 && per<=100)
      printf("\nDistinction");
   else if(per>=60 && per<=75)
      printf("\n1st Class");
   else if(per>=50 && per<60)
      printf("\n2nd Class");
   else if(per>=40 && per<50)
      printf("\nPass Class");
   else
      printf("\nYou are Fail");
}