#include <stdio.h>
/**
 *main - entry
 *@argc: integer
 *@argv: char
 *Return: nothing
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
