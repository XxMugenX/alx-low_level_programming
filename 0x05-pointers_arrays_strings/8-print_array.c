#include "main.h"
#include <stdio>
/**
 *print_array - traverse through an array
 *@n: array size
 *@a: array
 *Return: void
 */
void print_array(int *a, int n)
{
int i;

int z;

z = n;

for (i = 0; i <= z - 1; i++)
{
printf("%d, ", a[i]);
}
printf("%d", a[i]);

return;
}
