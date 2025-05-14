/*Write a program,which accepts annual basic salary of an employee and 
calculates and displays the income tax as per the following rules.
Basic:  < 1,50,000                 Tax=0
          1,50,000 to 3,00,000     Tax=20%
        > 3,00,000                 Tax=30% 
*/

#include<stdio.h>
int main()
{
  float salary,tax;
  printf("Enter Employee Basic Salary : ");
  scanf("%f",&salary);
  if(salary<=150000)
  {
    tax=0;
    printf("Income Tax = %.2f",tax);
  }
  else if(salary>150000 && salary<=300000)
  {
    tax=(salary*0.2);
    printf("Income Tax = %.2f",tax);
  }
  else if(salary>300000)
  {
    tax=(salary*0.3);
    printf("Income Tax = %.2f",tax);
  }
}