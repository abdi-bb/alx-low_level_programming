/*
 * File: 2-args.c
 * Auth: Abdi G. Berhe
 */

#include <stdio.h>

/**
 * main - Prints all the arguments it receives.
 * @argc: Number of arguments passed to the program.
 * @argv: An array of pointers ro the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
