#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - start
 *@s2: char
 *@s1: char
 *Return: concatention
 */
char *str_concat(char *s1, char *s2)
{
int i;
int j;
int c;
int d;
int len;
char *can;
i = 0;

j = 0;

c = strlen(s1);

d = strlen(s2);

len = c + d;


if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
can = malloc((len + 1) * sizeof(char));
if (can == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
can[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++, c++)
{
can[c] = s2[j];
}
return (can);
}
