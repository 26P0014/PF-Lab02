#include <stdio.h>

int isPrime(int n);
int isPerfect(int n);
int reverseNumber(int n);
int isPalindrome(int n);
int digitSum(int n);
void report(int n);

int main()
{
int n;

printf("Enter a positive number: ");
scanf("%d", &n);

while (n <= 0)
{
printf("Please enter a number greater than zero.\n");
printf("Enter a positive number: ");
scanf("%d", &n);
}

report(n);

return 0;
}

/* Category 4: arguments, returns a value */
int isPrime(int n)
{
int i;

if (n < 2)
{
return 0;
}

for (i = 2; i <= n / i; i++)
{
if (n % i == 0)
{
return 0;
}
}

return 1;
}

/* Category 4: arguments, returns a value */
int isPerfect(int n)
{
int i, sum = 0;

for (i = 1; i <= n / 2; i++)
{
if (n % i == 0)
{
sum = sum + i;
}
}

return sum == n;
}

/* Category 4: arguments, returns a value */
int reverseNumber(int n)
{
int reverse = 0, digit;

while (n > 0)
{
digit = n % 10;
reverse = reverse * 10 + digit;
n = n / 10;
}

return reverse;
}

/* Category 4: arguments, returns a value */
int isPalindrome(int n)
{
return n == reverseNumber(n);
}

/* Category 4: arguments, returns a value */
int digitSum(int n)
{
int sum = 0;

while (n > 0)
{
sum = sum + n % 10;
n = n / 10;
}

return sum;
}

/* Category 2: arguments, no return value */
void report(int n)
{
int i;

printf("Prime: %s\n", isPrime(n) ? "Yes" : "No");
printf("Perfect: %s\n", isPerfect(n) ? "Yes" : "No");
printf("Reverse: %d\n", reverseNumber(n));
printf("Palindrome: %s\n", isPalindrome(n) ? "Yes" : "No");
printf("Sum of digits: %d\n", digitSum(n));

printf("Primes from 1 to %d:", n);

for (i = 1; i <= n; i++)
{
if (!isPrime(i))
{
continue;
}

printf(" %d", i);
}

printf("\n");
}