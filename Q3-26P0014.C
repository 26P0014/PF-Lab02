#include <stdio.h>
void circleInfo(float radius, float *area, float *circumference);
int main()
{
float radius, area, circumference;
do
{
printf("Enter radius: ");
scanf("%f", &radius);
if (radius < 0)
{
printf("Radius cannot be negative.\n");
}
}
while (radius < 0);
circleInfo(radius, &area, &circumference);
printf("Area: %.2f\n", area);
printf("Circumference: %.2f\n", circumference);
return 0;
}
void circleInfo(float radius, float *area, float *circumference)
{
float pi = 3.14159f;
*area = pi * radius * radius;
*circumference = 2 * pi * radius;#include <stdio.h>
void circleInfo(float radius, float *area, float *circumference);
int main()
{
float radius, area, circumference;
do
{
printf("Enter radius: ");
scanf("%f", &radius);
if (radius < 0)
{
printf("Radius cannot be negative.\n");
}
}
while (radius < 0);
circleInfo(radius, &area, &circumference);
printf("Area: %.2f\n", area);
printf("Circumference: %.2f\n", circumference);
return 0;
}
void circleInfo(float radius, float *area, float *circumference)
{
float pi = 3.14159f;
*area = pi * radius * radius;
*circumference = 2 * pi * radius;
}