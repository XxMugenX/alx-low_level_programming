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
for (i = '0' ; i <= '9' ; i++)

{
putchar(i);
if (i < '9')
{
putchar(',');

putchar(' ');
}
else
{
putchar('\n');

}
}

}

return (0);
}
