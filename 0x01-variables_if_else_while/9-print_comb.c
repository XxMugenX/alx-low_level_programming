#include <stdio.h>
/**
 *main - comma
 *
 *Return: nothing
 */
int main(void)
{
int i;

i = '0';

while (i < '9')
{
for (i = '0' ; i <= '8' ; i++)

{
putchar(i);

putchar(',');

putchar(' ');
}
}
putchar('9');

return (0);
}
