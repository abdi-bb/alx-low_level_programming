/*
 * File: 3-mul.c
 * Auth: Abdi G. Berhe
 */

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints product of two numbers.
 * @argc: Number of received arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: returns 0 if two arguments received 1 if not.
 */
int main(int argc, char *argv[])
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	prod = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", prod);

	return (0);
}
