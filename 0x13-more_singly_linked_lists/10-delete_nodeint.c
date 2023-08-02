#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to first node
 *
 * @index: index of node
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	unsigned int new;

	listint_t *temp = *head;

	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (new = 0; new < (index - 1); new++)
	{
		if (temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);

	return (1);
}

