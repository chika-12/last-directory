#include "lists.h"
/**
 * pop_listint - deletes the first node
 * @head: pointer to the first node of the list
 * Return: data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;

	if (ptr == NULL)
	{
		return (0);
	}

	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
