#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 *
 * @head: chanced to NULL or head node  listint_t
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
