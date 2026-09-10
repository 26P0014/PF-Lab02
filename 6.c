/*Write a C program that takes a float value between -1000 and 1000 as input. Use an explicit
cast to store it in an int variable. Display the original value, the converted integer, and the
dierence between the original value and the converted integer. Test your program with 19.75
and -3.80. Explain whether the cast rounds the value or discards its fractional part.*/


#include <stdio.h>
int main() 

{
float num;
int n;
 printf("Enter a number between -1000 and 1000: ");
 scanf("%f", &num);
 n = (int)num;
 printf("Original: %.2f\n", num);
 printf("Integer: %d\n", n);
 printf("Difference: %.2f\n", num - n);
 return 0;
}