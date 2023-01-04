/*
 * File: 4-pow_recursion.c
 * Auth: Abdi G. Berhe
 */

#include "main.h"

/**
 * _pow_recursion - function that returns @x raised to @y
 * @x: number to be raised.
 * @y: exponent
 *
 * Return: returns 0 for negative exponent
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (0);
	}
	return (x * int _pow_recursion(x, (y - 1)));
}
