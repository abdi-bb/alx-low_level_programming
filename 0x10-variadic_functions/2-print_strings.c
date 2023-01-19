#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: String to separate the strings to be printed.
 * @n: Number of strings passed to the function.
 *
 * Retirn: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == (n - 1))
			printf("%s", va_arg(ap, char *));
		else
			printf("%s%s", va_arg(ap, char *), separator);
	}
	va_end(ap);
	printf("\n");
}

