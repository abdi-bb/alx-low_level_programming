#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: Pointer to a function.
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}

