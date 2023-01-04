/*
 * File: 1-print_rev_recursion.c
 * Auth: Abdi G. Berhe
 */

#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
