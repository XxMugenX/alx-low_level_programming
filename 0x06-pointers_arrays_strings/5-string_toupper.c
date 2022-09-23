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

for (i = 0; i <= j; i++)
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}
return (str[i]);
}
