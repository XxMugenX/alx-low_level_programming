#include "main.h"
/**
 *print_most_numbers - prints some numbers
 *Return: void
 */

void print_most_numbers(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
if (i == '2' || i == '4')
{
i++
}
_putchar(i);
}
_putchar('\n');
return;
}
