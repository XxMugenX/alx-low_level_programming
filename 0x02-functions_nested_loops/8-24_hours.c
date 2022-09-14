#include "main.h"
/**
 *jack_bauer - twenty four hours
 *
 */
void jack_bauer(void)
{
int i;

int j = 0;

while (j <= 24)
{
	for (i = 0; i <= 59; i++)
	{
	_putchar(j);

	_putchar(':');

	_putchar(i);

	_putchar('\n');
	}

j++;
}
return;
}
