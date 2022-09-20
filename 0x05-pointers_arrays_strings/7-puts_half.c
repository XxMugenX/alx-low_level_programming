#include "main.h"
#include <string.h>
/**
 *puts_half - prints half of a string
 *@str: string or char array
 *Return: void
 */
void puts_half(char *str)
{
int i;

int len;

int n;

len = strlen(str);

n = len - 2;

if ((len % 2) == 0)
{
for (i = len / 2; i <= len - 1; i++)
{
_putchar(str[i]);
}
}
if ((len % 2) != 0)
{
for (i = n / 2; i <= len - 1; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');

return;
}
