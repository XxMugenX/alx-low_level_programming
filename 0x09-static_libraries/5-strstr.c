#include "main.h"
/**
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
int i;

int j;
while ((haystack[i] != '\0') && (needle[j] != '\0'))
{
if (haystack[i] != needle[j])
{
i++;
j = 0;
}
else
{
i++;
j++;
}

}
if (needle == '\0')
{
return (haystack);
}
}
