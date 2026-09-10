/*Write a C program that takes two integer values as input from the user. Swap the values and
display both variables after swapping. The original value of num1 should be stored in num2, and
the original value of num2 should be stored in num1.*/


#include<stdio.h>
int main()
{
int num1,num2,num3;
printf("Enter first num : ");
scanf("%d",&num1);
printf("Enter second no : ");
scanf("%d",&num2);
num3=num1;
num1=num2;
num2=num3;
printf("\nswap 1 : %d",num1);
printf("\nswap 2 : %d",num2);
return 0;
}


