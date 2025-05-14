/*Write a C program to accept file from user and count total number of lines
and print that file.*/
#include<stdio.h>
int main()
{
   FILE *fp;
   char fname[20],ch;
   int cnt=0;
   printf("Enter File Name : ");
   scanf("%s",&fname);
   fp=fopen(fname,"r");
   if(fp==NULL)
      printf("File Not Exist...");
   ch=fgetc(fp);
   while(ch!=EOF)
   {
      if(ch=='\n'||ch==10)
      {
         cnt++;
      }
      printf("%c",ch);
      ch=fgetc(fp);
   }
   printf("\nLines = %d",cnt);
}