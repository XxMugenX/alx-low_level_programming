#include "main.h"
/**
 *_strncpy - copies string to another variable
 *@dest: char
 *@src: char
 *@n: integer
 *Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] < n; i++)
{
dest[i] = src[i];
}
dest = '\0';
return (dest);
}
