#include <stdio.h>
/**
 *main - fizzbuzz
 *Return: nothing
 */
int main(void)
{
int i;

int a;

a = 0;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz");
putchar(' ');
}
else if ((i % 3) == 0)
{
printf("Fizz");
putchar(' ');
}
else if ((i % 5) == 0)
{
printf("Buzz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
putchar('\n');
return (0);
}
