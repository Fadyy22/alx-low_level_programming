#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the head to NULL
 *
 * @head: pointer to the head of the linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while (temp != NULL)
		{
			temp = temp->next;
			free(*head);
			*head = temp;
		}
	}
}
