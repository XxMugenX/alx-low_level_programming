#include <stdio.h>
/**
*main - prints hex
*
*Return: nothing
*/
int main(void)
{

int i;

for (i = '0' ; i <= '9' ; i++)
{
putchar(i);

}

for (i = 'a' ; i <= 'f' ; i++)
{
putchar(i);
}
putchar('\n');

return (0);
}
