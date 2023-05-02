#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *curr;
	unsigned int x;

	if
		(*head == NULL)
			return (-1);
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	curr = *head;
	for (x = 0; curr != NULL && x < index - 1; x++)
	{
		curr = curr->next;
	}
	if (curr == NULL || curr->next == NULL)
		return (-1);
	ptr = curr->next;
	curr->next = ptr->next;
	free(ptr);

	return (1);
}
