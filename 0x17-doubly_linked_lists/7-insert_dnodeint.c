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

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	temp = *h;

	if (idx == 0)
	{
		new_node->next = temp;
		temp->prev = new_node;
		return (new_node);
	}

	for (i = 0; i < idx && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL && idx != 0)
		return (NULL);

	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	new_node->next = temp;

	return (new_node);

}
