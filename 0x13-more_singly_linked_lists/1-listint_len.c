#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: header of the linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t no_elements;

	no_elements = 0;

	while (h != NULL)
	{
		no_elements++;
		h = h->next;
	}

	return (no_elements);
}
