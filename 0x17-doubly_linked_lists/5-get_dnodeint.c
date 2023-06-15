#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: head of the double linked list
 * @index: index of the node, starting from 0
 *
 * Return: nth node of a dlistint_t linked list,
 * if the node does not exist, return NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	int counter;

	if (head == NULL)
		return (NULL);

	temp = head;
	counter = 0;
	while (temp != NULL)
	{
		if (counter == index)
			return (temp);
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
