#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of the double linked list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int no_nodes = 0;

	if (h == NULL)
		return (no_nodes);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
