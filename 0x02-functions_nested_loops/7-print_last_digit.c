/*
 * File: 7-print_last_digit.c
 * Auth: Abdi G. Berhe
 */

#include "main.h"

/**
 * print_last_digit - main function
 *
 * @n: integer to get last digit of
 * Return: last digit of n
 */
int print_last_digit(int n)
{

	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
