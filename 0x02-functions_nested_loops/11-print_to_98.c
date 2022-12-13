/*
 * File: 11-print_to_98.c
 * Auth: Abdi G. Berhe
 */

#include "main.h"
#include "6-abs.c"
#include <stdio.h>

/**
 * print_to_98 - main function
 * @n: natural number to return
 * The number to begin counting at.
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	} else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
