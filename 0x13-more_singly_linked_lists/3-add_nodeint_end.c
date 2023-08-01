#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to first node of the list
 * @n: Data to add to the end of the list
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = NULL;

	listint_t *ptr = NULL;

	ptr = *head;

	temp = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (ptr);
}
