#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first data in the linked list
 *
 * Return: returns the sum of all the data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	int add_list;

	add_list = 0;

	listint_t *temp = head;

	while (temp)
	{
		add_list + = temp->n;
		temp = temp->next;
	}

	return (add_list);
}
