#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if(*head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (data);
}
