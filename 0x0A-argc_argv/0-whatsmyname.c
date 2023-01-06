/*
 * File: 0-whatsmyname.c
 * Auth: Abdi G. Berhe
 */

#include <stdio.h>

/**
 * main - prints its name.
 * @argv: An array of pointers to the arguments.
 * @argc: The number of arguments supplied to the program.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char* argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
