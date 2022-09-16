#include "main.h"
/**
 *print_square - prints a square
 *@size: integer
 *Return: nothing
 */
void print_square(int size)
{
int i;

int j;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
_putchar('\n');
}
return;
}
