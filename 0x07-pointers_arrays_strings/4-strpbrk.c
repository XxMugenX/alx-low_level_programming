#include "main.h"
/**
 *_strpbrk - start
 *@accept: char
 *@s: char
 *Return: string break from match
 */
char *_strpbrk(char *s, char *accept)
{

int i;

int j;

i = 0;

while (*s)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
return (s);
}
}
s++;
}
return (NULL);
}
