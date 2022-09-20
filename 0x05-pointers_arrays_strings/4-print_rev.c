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

len = strlen(s);

for (len; len > 0; len--)
{
_putchar(s[len]);
}

return;

}
