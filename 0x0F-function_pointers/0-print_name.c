#include "function_pointers.h"
/**
 *print_name - prints name
 *@f: function
 *@name: pointer to char
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
(*f)(name);

}
