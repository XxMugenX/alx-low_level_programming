#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints
 *
 * @n: integer
 */
void print_to_98(int n)
{
int i;

i = n;

if (i > 98)
{
for (i = n; i >= 99; i--)

printf("%d, ", i);

}
if (i < 98)
{
for (i = n; i <= 97; i++)

printf("%d, ", i);

}
printf("%d\n", i);
}
