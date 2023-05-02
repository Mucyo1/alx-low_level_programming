#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list of integers
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		printf("[%p] %d\n", (void *)node, node->n);
		count++;

		if (node <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}

	return (count);
}
