#include "function_pointers.h"
/**
 *print_name - prints name
 *@f: function
 *@name: pointer to char
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
while (*name != '\0')
{
(*f)(*name);
_putchar(name);

*name++;
}
_putchar('\0');

return (0);

}
