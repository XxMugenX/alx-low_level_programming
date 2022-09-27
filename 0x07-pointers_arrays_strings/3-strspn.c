#include "main.h"
/**
 *_strspn - returns number of matches found between accept and s pointers
 *@s: char
 *@accept: char
 *Return: number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len;

int i;

int j;

len = 0;

while (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (accept[j] == s[i])
{
len++;
}
}
i++;
}
return (len);
}
