#include "main.h"
/**
 *_memset - changes the memory address of n number of bytes in a string
 *@n: integer
 *@b: char
 *@s: char
 *Return: returns pointer to memory space
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;

i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
