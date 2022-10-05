#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry
 *@argc: int
 *@argv: char
 *Return: nothing
 */
int main(int argc, char *argv[])
{
int mul;

if (argc != 3)
{
printf("Error\n");

return (1);
}
else
{
mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);

printf("%d\n", mul);

return (0);
}
}
