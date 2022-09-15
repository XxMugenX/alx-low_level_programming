#include "main.h"
/**
 *print_to_98 - prints
 *
 * @n: integer
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d", n);
}
if (n > 98)
{
	for (n; n >= 98; n--)
	{
	if (n > 98)
	
printf("%d, ", n);

if (n == 98)
{
printf("%d", n);
}
}
if (n < 98)
{
for (n; n <= 98; n++)
{
	if (n < 98)
	{
	printf("%d, ", n);
	}
	if (n == 98)
	{
	printf("%d", n);
	}


}
}
}
return;
}
