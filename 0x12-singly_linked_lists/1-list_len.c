#include "lists.h"
/**
 * list_len - prints the number of elements in a
 * linked list
 * @h: poinert to head
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			count++;
		h = h->next;
	}
	return (count);
}
