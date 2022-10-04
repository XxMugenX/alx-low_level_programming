#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array
 *@size: integer
 *@c: char
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
char *p;

int i;

i = 0;

p = malloc(sizeof(char) * (size + 1));

if (size == 0)
{
return (NULL);
}
else
{
while (i <= size)
{
p[i] = c[i];
i++;
}
p[i] = '\0';
}
return (p);
}
