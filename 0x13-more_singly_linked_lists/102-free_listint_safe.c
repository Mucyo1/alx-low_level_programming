#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t linked list
 * @h: double pointer to the beginning of the list
 *
 * Return: size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *curr, *rev = NULL;

	if (h == NULL)
		return (0);
	while (*h != NULL)
	{
		curr = *h;
		*h = (*h)->next;
		size++;
		if (rev > curr)
		{
			free(curr);
			break;
		}
		free(curr);
		rev = curr;
	}
	return (size);
}
