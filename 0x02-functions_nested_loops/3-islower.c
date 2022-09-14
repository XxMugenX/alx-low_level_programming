#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_islower - lowercase alphabets
 *
 *@c: letter
 *
 * Return: nothing
 */

int _islower(int c)
{

if (islower(c))
{
_putchar('1');

_putchar('\n');
}
else
{

_putchar ('0');

_putchar('\n');
}
return (0);
}
