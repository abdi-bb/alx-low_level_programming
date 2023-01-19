#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

/**
 * sum_them_all - Returns the sum of all the parameters.
 * @n: Number of parameters.
 *
 * Return: The sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

