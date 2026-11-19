#include <stdio.h>

/*
Function categories:
showMenu - Category 1: no arguments, no return value
readNonNegative - Category 3: no arguments, returns a value
printLine - Category 2: arguments, no return value
power - Category 4: arguments, returns a value
factorial - Category 4: arguments, returns a value
gcd - Category 4: arguments, returns a value
lcm - Category 4: arguments, returns a value

power() returns the answer so main can print it
or use it in another calculation.
*/

void showMenu(void);
int readNonNegative(void);
void printLine(int length);
long power(int base, int exp);
long factorial(int n);
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
int choice, a, b, n;

do
{
showMenu();
printf("Choice: ");
scanf("%d", &choice);

if (choice == 1)
{
a = readNonNegative();
b = readNonNegative();

printLine(20);
printf("%d ^ %d = %ld\n", a, b, power(a, b));
printLine(20);
}
else if (choice == 2)
{
n = readNonNegative();

printLine(20);
printf("%d! = %ld\n", n, factorial(n));
printLine(20);
}
else if (choice == 3)
{
a = readNonNegative();
b = readNonNegative();

printLine(20);
printf("GCD = %d\n", gcd(a, b));
printf("LCM = %d\n", lcm(a, b));
printLine(20);
}
else if (choice == 4)
{
printf("Goodbye!\n");
}
else
{
printf("Invalid choice.\n");
}
} while (choice != 4);

return 0;
}

/* Category 1: no arguments, no return value */
void showMenu(void)
{
printf("\n----- MINI MATH TOOLKIT -----\n");
printf("1. Power\n");
printf("2. Factorial\n");
printf("3. GCD and LCM\n");
printf("4. Exit\n");
}

/* Category 3: no arguments, returns a value */
int readNonNegative(void)
{
int n;

printf("Enter a non-negative number: ");
scanf("%d", &n);

while (n < 0)
{
printf("Number cannot be negative.\n");
printf("Enter a non-negative number: ");
scanf("%d", &n);
}

return n;
}

/* Category 2: arguments, no return value */
void printLine(int length)
{
int i;

for (i = 0; i < length; i++)
{
printf("-");
}

printf("\n");
}

/* Category 4: arguments, returns a value */
long power(int base, int exp)
{
long answer = 1;
int i;

for (i = 0; i < exp; i++)
{
answer = answer * base;
}

return answer;
}

/* Category 4: arguments, returns a value */
long factorial(int n)
{
long answer = 1;
int i;

for (i = 2; i <= n; i++)
{
answer = answer * i;
}

return answer;
}

/* Category 4: arguments, returns a value */
int gcd(int a, int b)
{
int remainder;

while (b != 0)
{
remainder = a % b;
a = b;
b = remainder;
}

return a;
}

/* Category 4: arguments, returns a value */
int lcm(int a, int b)
{
if (a == 0 || b == 0)
{
return 0;
}

return (a / gcd(a, b)) * b;
}