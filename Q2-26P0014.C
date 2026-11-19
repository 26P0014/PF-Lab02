#include <stdio.h>
void swap(int *x, int *y);
void sortThree(int *a, int *b, int *c);
int main()
{
int a, b, c;
printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);
printf("Before: %d %d %d\n", a, b, c);
sortThree(&a, &b, &c);
printf("After: %d %d %d\n", a, b, c);
return 0;
}
void swap(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
void sortThree(int *a, int *b, int *c)
{
if (*a > *b)
{
swap(a, b);
}
if (*a > *c)
{
swap(a, c);
}
if (*b > *c)
{
swap(b, c);
}
}