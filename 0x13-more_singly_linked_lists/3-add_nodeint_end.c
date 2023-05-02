#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *newN;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
	{
		*head = newN;
		return (newN);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = newN;
	return (newN);

}
