/*The basic salary of an employee is decided at the time of employement,
which may be different for different employees.Apart from basic,employee
gets 10% of basic as house rent,30% of basic as dearness allowance.A
professional tax of 5% of basic is deducted from salary.Accept the employee
id and basic salary for an employee and output the take home salary of the
employee.*/

#include<stdio.h>
int main()
{
   int id;
   float s,bsalary,da,tax,house_rate;
   printf("Enter Employee ID : ");
   scanf("%d",&id);
   printf("Enter Basic Salary : ");
   scanf("%f",&bsalary);
   house_rate=(bsalary*0.1);
   da=(bsalary*0.3);
   tax=(bsalary*0.05);
   s=bsalary+((house_rate+da)-tax);
   printf("\nID : %d \nSalary : %.2f ",id,s);
}