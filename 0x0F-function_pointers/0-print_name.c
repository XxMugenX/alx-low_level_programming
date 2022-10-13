#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints name
 *@f: function
 *@name: pointer to char
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
{
return;
}
(*f)(name);

}
