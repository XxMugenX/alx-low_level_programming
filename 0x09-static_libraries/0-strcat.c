#include "main.h"
/**
 *_strcat - concatenation of two strings
 *@dest: char
 *@src: char
 *Return: concantenated string
 */
char *_strcat(char *dest, char *src)
{
int i;

int j;

for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = dest[i];
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
