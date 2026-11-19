#include <stdio.h>

void welcome(void);
void printSquare(int side, char ch);

int main()
{
int side;
char ch;

welcome();

printf("Enter side: ");
scanf("%d", &side);

printf("Enter character: ");
scanf(" %c", &ch);

printSquare(side, ch);
welcome();

return 0;
}

/* Category 1: no arguments, no return value */
void welcome(void)
{
printf("==============================\n");
printf("    Pattern Printer v1.0\n");
printf("==============================\n");
}

/* Category 2: arguments, no return value */
void printSquare(int side, char ch)
{
int i, j;

for (i = 0; i < side; i++)
{
for (j = 0; j < side; j++)
{
printf("%c ", ch);
}
printf("\n");
}
}