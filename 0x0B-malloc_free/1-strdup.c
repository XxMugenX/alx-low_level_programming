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

if (str == NULL)
{
return (NULL);
}
else
{

dup = malloc(sizeof(char));

dup = str;

dup = '\0';

return (dup);
}
return (dup);
}
