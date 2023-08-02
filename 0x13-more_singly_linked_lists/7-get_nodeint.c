#include "lists.h"
/**
 * get_nodeint_at_index - finds a node
 * @head: pointer to first node
 * @index: index of node to print
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t x;

	for (x = 0; (x < index) && (head->next); x++)
	{
		head = head->next;
	}
	if (x < index)
	{
		return (NULL);
	}
	return (head);
}
