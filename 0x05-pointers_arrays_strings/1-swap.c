#include "main.h"
/**
 *swap_int - swaps address of two int values
 *
 *@a: pointer
 *
 *@b: pointer
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{

int z;

z = *a;

*a = *b;

*b = z;

return;
}
