#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the first node
 *
 * Return: reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *x;
	listint_t *b;

	x = NULL;
	b = NULL;

	while (*head != NULL)
	{
		b = (*head)->next;
		(*head)->next = x;
		x = *head;
		*head = b;
	}

	*head = x;
	return (*head);
}
