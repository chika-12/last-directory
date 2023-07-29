#include "lists.h"
/**
 * add_node - adds a new node to the linked list
 * @head: head pointer
 * @str: string to be added to the linked list
 * Return: New node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;
	return (*head);
}

