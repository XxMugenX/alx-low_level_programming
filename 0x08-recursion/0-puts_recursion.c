#include "main.h"
/**
 *_puts_recursion - entry
 *@s: char
 *Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);

_puts_recursion(s + 1);

_putchar('\n');
}
return;
}
