#include "main.h"
/**
 *_strchr - returns a string from the first occurrance of a character
 *@c: char
 *@s: char
 *Return: returns a string fron the first identified letter
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
*s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
