#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of listint_t
 * @h: Node to be passed as an argument
 *
 * Return: The number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while(h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

