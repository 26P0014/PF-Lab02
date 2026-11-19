#include <stdio.h>

float toFahrenheit(float c);
float toCelsius(float f);
void printTable(int start, int end, int step);

int main()
{
int start, end, step;
float f;

printf("Start: ");
scanf("%d", &start);

printf("End: ");
scanf("%d", &end);

printf("Step: ");
scanf("%d", &step);

while (step <= 0)
{
printf("Step must be greater than zero.\n");
printf("Step: ");
scanf("%d", &step);
}

printTable(start, end, step);

printf("\nEnter a temperature in Fahrenheit: ");
scanf("%f", &f);

printf("%.1f F = %.2f C\n", f, toCelsius(f));

return 0;
}

/* Category 4: arguments, returns a value */
float toFahrenheit(float c)
{
return c * 9.0f / 5.0f + 32;
}

/* Category 4: arguments, returns a value */
float toCelsius(float f)
{
return (f - 32) * 5.0f / 9.0f;
}

/* Category 2: arguments, no return value */
void printTable(int start, int end, int step)
{
int c;

printf("Celsius   Fahrenheit\n");

for (c = start; c <= end; c = c + step)
{
printf("%7d   %10.1f\n", c, toFahrenheit(c));
}
}