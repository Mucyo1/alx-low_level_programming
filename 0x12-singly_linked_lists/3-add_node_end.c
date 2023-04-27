#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node, *last;

	if (!head || !str)
		return (NULL);

	n_node = malloc(sizeof(list_t));
	if (!n_node)
		return (NULL);

	n_node->str = strdup(str);
	if (!n_node->str)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = NULL;
	if (!*head)
	{
		*head = n_node;
		return (n_node);
	}

	last = *head;
	while (last->next)
		last = last->next;
	last->next = n_node;

	return (n_node);
}
