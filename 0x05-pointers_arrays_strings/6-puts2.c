#include "main.h"
#include <string.h>
/**
 *puts2 - prints half of a string
 *@str: string
 *Return: void
 */
void puts2(char *str)
{
int i;

int len;

len = strlen(str);

for (i = 0; i <= len; i += 2)
{
_putchar(str[i]);
}
return;
}
