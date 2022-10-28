#include "main.h"

/**
 *binary_to_uint - converts binary to decimal
 *@b: string containing binary
 *Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
	return (0);

unsigned int sum = 0;
int len;
int pow = 1;

for (len = 0; b[len] != '\0';)
{
len++;
}

len = len - 1;

for (len; len >= 0; len--)
{
if (b[len] != '1' && b[len] != '0')
{
return (0);
}
sum += (b[len] - '0') * pow;

pow *= 2;
}

return (sum);
}
