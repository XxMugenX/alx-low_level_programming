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

unsigned int i;

i = 0;

p = malloc(size * sizeof(char));

if (size == 0)
{
return (NULL);
}
else
{
while (i <= size)
{
p[i] = c;
i++;
}
p[i] = '\0';
}
return (p);
}
