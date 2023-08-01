#include "lists.h"
/**
 * add_nodeint - adds a node at the begining of
 * a linked list
 * @head: pointer to the first node
 * @n: new node to be added
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = NULL;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

