#include <stdio.h>

int readUnits(void);
float calculateBill(int units);

int main()
{
int units;
float bill;

units = readUnits();
bill = calculateBill(units);

printf("Units consumed: %d\n", units);
printf("Total bill: Rs %.2f\n", bill);

return 0;
}

/* Category 3: no arguments, returns a value */
int readUnits(void)
{
int units;

printf("Enter units consumed: ");
scanf("%d", &units);

while (units < 0)
{
printf("Units cannot be negative.\n");
printf("Enter units consumed: ");
scanf("%d", &units);
}

return units;
}

/* Category 4: arguments, returns a value */
/*
The bill is returned so main can display it.
The returned amount can also be used in another calculation.
*/
float calculateBill(int units)
{
float bill;

if (units <= 100)
{
bill = units * 10.0f;
}
else if (units <= 300)
{
bill = 100 * 10.0f + (units - 100) * 15.0f;
}
else
{
bill = 100 * 10.0f + 200 * 15.0f
+ (units - 300) * 20.0f;
}

if (bill > 3000)
{
bill = bill + bill * 0.05f;
}

return bill;
}