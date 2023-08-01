#include "lists.h"
/**
 * listint_len - prints the number of node in a list
 * @h: pointer to the first node
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	int count;

	const listint_t *ptr = h;

	count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

