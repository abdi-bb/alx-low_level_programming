/*
 * File: 3-factorial.c
 * Auth: Abdi G. Berhe
 */

#include "stdio.h"

/**
 * factorial - Function that returns a factorial of a givennumber.
 * @n: number to calculate its factorial
 * Return: return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
