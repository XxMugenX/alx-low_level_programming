#include "main.h"
#include <string.h>
/**
 *rev_string - reverses strings
 *
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
int i;

int len;

len = strlen(s);

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
return;
}
