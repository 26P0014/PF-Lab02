#include <stdio.h>
#include <math.h>

/*
printf() and scanf(): stdio.h, return int.
sqrt(), pow(), ceil() and floor(): math.h, return double.
*/

int main()
{
double a, b, c, area;

printf("Enter side a: ");
scanf("%lf", &a);

printf("Enter side b: ");
scanf("%lf", &b);

c = sqrt(pow(a, 2) + pow(b, 2));
area = 0.5 * a * b;

printf("Hypotenuse: %.2f\n", c);
printf("Rounded up: %.0f\n", ceil(c));
printf("Rounded down: %.0f\n", floor(c));
printf("Area: %.2f\n", area);

return 0;
}