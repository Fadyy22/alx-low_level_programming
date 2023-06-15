#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: pointer to the head of the double linked list
 * @idx: index to insert new node at
 * @n: int to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (*h == NULL || idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		i = 0;
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		temp = *h;
		for (i = 0; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
		if (temp->next == NULL)
		{
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp->next->prev = new_node;
		new_node->next = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
