#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

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
