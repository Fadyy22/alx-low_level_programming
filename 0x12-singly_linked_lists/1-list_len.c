#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list
 *
 * @h: node header
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		no_elements++;
	}
	return (no_elements);
}
