#include <stdio.h>
/**
 * print_alphabet - prints alphabet
 *
 */

void print_alphabet(void)
{
int x;

for (x = 'a'; x <= 'z'; x++)
	putchar(x);

putchar('\n');
return;
}
