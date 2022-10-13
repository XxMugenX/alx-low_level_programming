#include "function_pointers.h"
/**
 *int_index - iterates through array and feeds value of array to cmp function
 *@cmp: function for finding match
 *@size: size of array in int
 *@array: int one dimensional array
 *Return: returns array index of match
 */
int int_index(int *array, int size, int (*cmp)(int))
{

int i;

int sto;

if (array == NULL || cmp == NULL)
{
return (-1);
}
if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
sto = i;

i = size + 1;

return (sto);
}
}
return (-1);
}
