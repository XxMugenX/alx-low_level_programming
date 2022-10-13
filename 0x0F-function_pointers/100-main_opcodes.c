#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry
 *@argc: argument count
 *@argv: variable passed through input by user
 *Return: 0 on success, 1 if count isn't right, 2 if bytes are negative
 */
int main(int argc, char *argv[])
{
int (*f)(int, char **);

int i = 0;
int hex;

if (argc != 2)
{
printf("Error\n");

exit(-1);
}

else if (atoi(argv[1]) < 0)
{
printf("Error\n");

exit(-2);
}
f = main;

while (i < atoi(argv[1]))
{
hex = *(unsigned char *)(f + i);

printf("%.2x", hex);

if (i < atoi(argv[1]) - 1)
{
putchar(' ');
}
i++;
}
putchar('\n');

return (0);
}
