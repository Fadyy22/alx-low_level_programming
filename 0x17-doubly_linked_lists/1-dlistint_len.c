#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: header of the double linked list
 *
 * Return: number of elements in a linked dlistint_t list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int no_elements = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		no_elements++;
		h = h->next
	}
	return (no_elements);
}
