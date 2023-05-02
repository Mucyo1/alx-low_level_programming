#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf(" the node is empty");
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;

	}

	return (count);
}
