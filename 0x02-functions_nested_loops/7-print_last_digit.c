#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_last_digit -obvious
 *
 *@x: integer
 *
 *Return: last digit
 */
int print_last_digit(int x)
{
	int z;

z = x % 10;

z = abs(z);

_putchar(z + '0');

return (z);
}
