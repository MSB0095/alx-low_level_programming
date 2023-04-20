#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name to print
 * @f: the function pointer to the function that prints
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
