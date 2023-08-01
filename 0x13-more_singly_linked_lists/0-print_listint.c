#include "lists.h"
/**
 * print_listint - prints the list of integers
 * @h: pointer containing the first node
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *ptr = h;

	count = 0;
	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}


