#include "main.h"
#include <ctype.h>
/**
 *_isdigit - returns true if passed arg is a digit
 *@c: integer
 *Return: 1 and 0
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
