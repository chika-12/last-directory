#include "lists.h"
/**
 * sum_listint - sums all the data in list
 * @head: pointer to first node of the list
 * Return: sum of list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
