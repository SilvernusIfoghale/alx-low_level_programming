#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: the link node type to  listint_t the  traverse
 *
 * Return: number of nodes element
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
