#include "function_pointers.h"
/**
 *array_iterator - goes through an array
 *@action: prints element
 *@size: size of array
 *@array: integer
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
{
return;
}

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}
}
