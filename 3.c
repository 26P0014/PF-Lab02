/*A customer asks an IT rm to develop a program in C that takes a tax rate and salary from
the user at runtime. Calculate the tax payable and the salary remaining after paying the tax.
Display the tax amount and net income after the deduction. Enter the tax rate as a percentage
from 0 to 100 and assume a nonnegative salary.*/

#include<stdio.h>
int main()
{
int tax_rate,salary,tax_amount,net_income;
printf("enter tax rate :");
scanf("%d",&tax_rate);
printf("enter salary :");
scanf("%d",&salary);
tax_amount=salary*tax_rate/100;
net_income=salary-tax_amount;
printf("\nthe tax_amount is %d:",tax_amount);
printf("\nthe net_income is %d:",net_income);
return 0;
}