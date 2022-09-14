#include "main.h"
#include <stdio.h>
/**
 *main - jj
 *
 *Return: nothing
 */

int main(void)
{

print_alphabet_x10();

return (0);
}

void print_alphabet_x10(void)
{
int x;

int y = 1;

while (y <= 10)
{
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
_putchar('\n');
y++;
}
return;
}
