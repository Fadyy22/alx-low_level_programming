#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: header of the double linked list
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
