#include <stdio.h>
void showBalance(float *balance);
void deposit(float *balance, float amount);
int withdraw(float *balance, float amount);
int main()
{
float balance = 5000;
float amount;
int choice;
do
{
printf("----- BANK ACCOUNT -----\n");
printf("1. Balance\n");
printf("2. Deposit\n");
printf("3. Withdraw\n");
printf("4. Exit\n");
printf("Choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
showBalance(&balance);
break;
case 2:
printf("Amount: ");
scanf("%f", &amount);
deposit(&balance, amount);
break;
case 3:
printf("Amount: ");
scanf("%f", &amount);
if (amount <= 0)
{
printf("Amount must be greater than zero.\n");
}
else if (withdraw(&balance, amount) == 1)
{
printf("Withdrawn.\n");
}
else
{
printf("Insufficient balance.\n");
}
break;
case 4:
printf("Goodbye!\n");
break;
default:
printf("Invalid choice.\n");
}
}
while (choice != 4);
return 0;
}
Lab 08 - C Solutions 5
Question 5: Bank Account (continued)
LAB 08 | Programming Fundamentals | C
void showBalance(float *balance)
{
printf("Balance: Rs %.2f\n", *balance);
}
void deposit(float *balance, float amount)
{
if (amount <= 0)
{
printf("Amount must be greater than zero.\n");
}
else
{
*balance = *balance + amount;
}
}
int withdraw(float *balance, float amount)
{
if (amount <= 0)
{
return 0;
}
if (amount > *balance)
{
return 0;
}
*balance = *balance - amount;
return 1;
}