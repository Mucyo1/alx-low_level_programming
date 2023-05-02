#include "lists.h"

/**
 * listint_len - returns the number of the elements
 * @h: linked of type listint_t to traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("this is empty");
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
