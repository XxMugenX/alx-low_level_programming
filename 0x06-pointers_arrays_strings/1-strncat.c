#include "main.h"
/**
 *_strncat -concatenates strings by adding n number of bytes from given string
 *@dest: char
 *@src: char
 *@n: integer
 *Return: returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int i;

int j;

for (i = 0; dest[i] != '\0'; i++)
{
dest[i] = dest[i];
}

for (j = 0; j < n; j++)
{
dest[i] = src[j];

i++;
}
dest[i] = '\0';
return (dest);
}
