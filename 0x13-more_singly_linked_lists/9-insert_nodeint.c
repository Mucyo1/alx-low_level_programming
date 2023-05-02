#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newN, *ptr;
	unsigned int x;

	if (head == NULL)
		return (NULL);
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;

	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}

	tmp = *head;
	for (x = 0; x < idx - 1 && ptr != NULL; x++)
		ptr = ptr->next;
	if (ptr == NULL)
	{
		free(newN);
		return (NULL);
	}

	newN->next = ptr->next;
		ptr->next = newN;
		return (newN);
}
