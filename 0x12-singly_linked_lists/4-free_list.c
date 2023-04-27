#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_list - frees a list_t list.
 * @head: pointer to the head of the list.
 */
void free_list(list_t *head)
{
	lit_t *temporary;

	while (head)
	{
		temporary = head;
		head = head->next;
		free(temporary->str);
		free(temp);
	}
}
