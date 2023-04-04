#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: listint_t pointer
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h);
{
	size_t x;

	x =  0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
