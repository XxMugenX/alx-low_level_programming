#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - matrix
 *@height: int
 *@width: int
 *Return: returns a matrice grid
 */
int **alloc_grid(int width, int height)
{
int **array, i = 0, n = 0;
if (width <= 0)
{
return (NULL);
}
if (height <= 0)
{
return (NULL);
}
array = malloc(height * sizeof(int));

if (array == NULL)
{
return (NULL);
}
while (i < height)
{
array[i] = malloc(width * sizeof(int));
if (array[i] == NULL)
{
while (i >= 0)
{
i--;
free(array[i]);
}
free(array);
return (NULL);
}
i++;
}
for (i = 0; i < height; i++)
{
for (n = 0; n < width; n++)
{
array[i][n] = 0;
}
}
return (array);
}
