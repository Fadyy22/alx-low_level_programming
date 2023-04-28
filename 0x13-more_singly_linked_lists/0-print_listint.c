#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: header of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t no_nodes;

	temp = h;
	no_nodes = 0;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		printf("%d\n)", temp->n);
		temp = temp->next;
		no_nodes++;
	}

	return (no_nodes);
}
