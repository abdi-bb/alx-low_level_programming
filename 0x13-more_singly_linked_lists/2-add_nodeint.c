#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	else
	{
		new->n = n;

		if (*head == NULL)
			*head = new;
		new->next = *head;
		*head = new;
	}
	return (new);
}

