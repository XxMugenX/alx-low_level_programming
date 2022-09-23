#include "main.h"
/**
 *reverse_array - reverses an array
 *@a: integer
 *@n: integer
 *Return: void
 */
void reverse_array(int *a, int n)
{
int i;

int st;

for (i = 0; i < n; i++)
{
st = a[i];

a[i] = a[n - 1];

a[n -1] = st;

n--;

}
return;
}
