#include "main.h"
/**
 *_memcpy - copies address memory of src to dest
 *@dest: char
 *@src: char
 *@n: integer
 *Return: a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

i = 0;

while (i < n)
{
dest[i] = src[i];

i++;
}
return (dest);
}
