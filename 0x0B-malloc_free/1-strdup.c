#include "main.h"
#include <stdlib.h>
/**
 *_strdup - duplicates string to another memory
 *@str: char pointer
 *Return: returns duplicate string
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i;

i = 0;

if (str == NULL)
{
return (NULL);
}
else
{
while (str[i] != '\0')
{
i++;
}
dup = malloc((i + 1) * sizeof(*dup));

if (dup == NULL)
{
return (NULL);
}
dup = str;

dup = '\0';

return (dup);
}
return (dup);
}
