#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 *main - entry
 *@argc: integer
 *@argv: char
 *Return: nothing
 */
int main(int argc, char *argv[])
{
int i;
int sum;

sum = 0;

if (argc == 1)
{
printf("0\n");

return (0);
}

for (i = 1; i < argc; i++)
{
if (isdigit(*argv[i]))
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");

return (1);
}
}
printf("%d\n", sum);

return (0);
}
