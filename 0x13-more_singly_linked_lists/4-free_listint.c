#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of a linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
