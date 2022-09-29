#include "main.h"
/**
 *_pow_recursion - entery
 *@y: integer
 *@x: integer
 *Return: x raised to power y ,if y is null it returns error
 */
int _pow_recursion(int x, int y)
{
if (y < -1)
{
return (-1);
}
if (y == 0)
{
return (1);
}
if (y != 0)
{
y--;
return (x * _pow_recursion(x, y));
}}
