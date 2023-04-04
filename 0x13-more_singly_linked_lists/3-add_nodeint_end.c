#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: points to the first node
 * @n: insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = calloc(sizeof(listint_t));

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next != NULL)
		temp = temp->nex;
	temp->next = new_node;
	return (new_node);
}
