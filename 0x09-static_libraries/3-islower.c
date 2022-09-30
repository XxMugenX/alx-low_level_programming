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
return (1);
_putchar('\n');
}
else
{
return (0);
_putchar('\n');
}
return (0);
}
