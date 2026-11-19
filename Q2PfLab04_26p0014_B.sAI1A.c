/*Write a C program that takes three side lengths, a, b, and c, as input. First check whether
they can form a valid triangle: each side must be less than the sum of the other two. If not,
display "Not a valid triangle". If they do form a triangle, use nested if / else statements
to classify it as:
▶ Equilateral – all three sides equal,
▶ Isosceles – exactly two sides equal,
▶ Scalene – no sides equal.
Test your program with (2, 2, 2), (3, 3, 5), (4, 5, 6), and (1, 2, 10).*/
#include <stdio.h>
int main(){
double a,b,c;
printf("Enter three side lengths: ");
scanf("%lf %lf %lf",&a,&b,&c);
if(a<b+c && b<a+c && c<a+b){
if(a==b){
if(b==c)
printf("Equilateral");
else
printf("Isosceles");
}else{
if(a==c || b==c)
printf("Isosceles");
else
printf("Scalene");
}
}else
printf("Not a valid triangle");
return 0;
}