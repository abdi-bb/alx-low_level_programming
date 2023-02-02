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
	if (newNode == NULL)
		return (NULL);
<<<<<<< HEAD
	newNode->n = n;
	newNode->next = NULL;
=======

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

>>>>>>> 8d4892bc7a227e6880b1bb93caf06eac9e17aaac
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	return (newNode);
}

