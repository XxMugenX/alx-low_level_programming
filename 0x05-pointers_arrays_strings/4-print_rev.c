#include "main.h"
#include <string.h>
/**
 *print_rev - prints words in reverse
 *
 *@s: char
 *
 *Return: void
 */
void print_rev(char *s)
{
int len;

int i;

len = strlen(s);

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');

return;
}
