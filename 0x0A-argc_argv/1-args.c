/*
 * File: 1-args.c
 * Auth: Abdi G. Berhe
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc);

	return (0);
}
