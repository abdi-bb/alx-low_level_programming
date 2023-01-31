#include "lists.h"

/**
 * add_nodeint_end - Adds new node to the end of a linked listt
 * @head: A pointer to the first node of the linked list
 * @n: Data to insert to the new node
 *
 * Return: The address of the new element, or NULL for failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

	newNode = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	temp = *head;
	while (*head != NULL)
	{
		temp = temp->next;
	}
	new->n = n;
	new->next = NULL;
	temp->next = new;

	return (new);
}

