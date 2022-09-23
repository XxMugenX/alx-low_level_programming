#include "main.h"
/**
 *string_toupper - changes lowercase toupper case
 *@str: char array
 *Return: capital letters
 */
char *string_toupper(char *str)
{
int i;

int j;

int len;

char *a;

a = str;

j = 0;

while (a[j] != '\0')
{

j++;

len = j;
}

for (i = 0; i < j; i++)
{
if (a[i] >= 'a' && a[i] <= 'z')
{
a[i] = a[i] - 'a' + 'A';
}
}
return (a);
}
