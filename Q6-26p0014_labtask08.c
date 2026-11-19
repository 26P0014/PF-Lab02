#include <stdio.h>
#include <math.h>
int solveQuadratic(double a, double b, double c, double *r1, double *r2);
int main()
{
double a, b, c;
double r1 = 0, r2 = 0;
int roots;
do
{
printf("Enter a, b, c: ");
scanf("%lf %lf %lf", &a, &b, &c);
if (a == 0)
{
printf("a cannot be zero.\n");
}
}
while (a == 0);
roots = solveQuadratic(a, b, c, &r1, &r2);
if (roots == 2)
{
printf("Two roots: %.2f and %.2f\n", r1, r2);
}
else if (roots == 1)
{
printf("One root: %.2f\n", r1);
}
else
{
printf("No real roots.\n");
}
return 0;
}
int solveQuadratic(double a, double b, double c, double *r1, double *r2)
{
double d;
d = b * b - 4 * a * c;
// The return value gives the root count. The pointers give the roots.
if (d < 0)
{
return 0;
}
if (d == 0)
{
*r1 = -b / (2 * a);
*r2 = *r1;
return 1;
}
*r1 = (-b + sqrt(d)) / (2 * a);
*r2 = (-b - sqrt(d)) / (2 * a);
return 2;
}