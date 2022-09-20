#include "main.h"
#include <string.h>
/**
 *rev_string - reverses strings
 *
 *@s: string
 *
 *Return: void
 */
void rev_string(char *s)
{
int i;

int len;

len = strlen(s);

for (i = 0; i < len / 2; i--)
{
temp = str1[i];

str1[i] = str1[len - i - 1];

str1[len - i - 1] = temp;
}
return;
}
