#include "lists.h"
/**
 * add_node_end - prints new node at the end of
 * a linked lis
 * @head: parameter
 * @str: new string
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
	return (ptr);
}
