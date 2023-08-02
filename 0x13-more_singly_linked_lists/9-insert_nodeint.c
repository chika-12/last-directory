#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node
 * @head: pointer to first node
 *
 * @idx: index
 *
 * @n: new data
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp = *head;

	unsigned int node;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;

	if (idx == 0)
	{
		ptr->next = temp;
		*head = ptr;
		return (ptr);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);

		temp = temp->next;
	}

	ptr->next = temp->next;
	temp->next = ptr;

	return (ptr);
}
