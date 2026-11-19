/*Write a C program that takes three distinct integers, a, b, and c, as input and finds the largest
value using nested if / else statements only – do not use the ternary operator or any built-in
maximum function. Display which variable (a, b, or c) holds the largest value and what that
value is. Test your program with (12, 45, 7), (100, 20, 99), and (-5, -1, -8).*/
#include <stdio.h>
int main(){
int a,b,c;
printf("Enter three distinct integers a, b and c: ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
if(a>c)
printf("a is largest: %d",a);
else
printf("c is largest: %d",c);
}else{
if(b>c)
printf("b is largest: %d",b);
else
printf("c is largest: %d",c);
}
return 0;
}