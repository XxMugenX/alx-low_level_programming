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

j = 0;

while (str[j] != '\0')
{

j++;

}
len = j;

for (i = 0; i < j; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 'a' + 'A';
}
else
{
return (str);
}
}
return (str);
}
