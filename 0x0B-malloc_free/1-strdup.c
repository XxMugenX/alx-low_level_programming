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
int i;
int j;
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
dup = malloc((i + 1) * (sizeof(*dup)));

if (dup == NULL)
{
return (NULL);
}
for (j = 0; str[j] != '\0'; j++)
{
dup[j] = str[j];
}
dup[i + 1] = '\0';
return (dup);
}
}
