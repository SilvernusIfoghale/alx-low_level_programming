#include "lists.h"

/**
 * free_listint - frees a linked list
 *
 * @head: frees the listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *reset;

	while (head != NULL)
	{
		reset = head->next;
		free(head);
		head = reset;
	}
}
