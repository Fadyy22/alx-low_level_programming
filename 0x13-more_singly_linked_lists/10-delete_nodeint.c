#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list
 *
 * @head: pointer to the head of the linked list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *curr = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	else if (index == 0)
	{
		*head = curr->next;
		free(curr);
		curr = NULL;
		prev = NULL;
		return (1);
	}
	else
	{
		for (i = 0; i < index && curr != NULL; i++)
		{
			prev = curr;
			curr = curr->next;
		}

		if (curr == NULL)
		{
			return (-1);
		}
		else
		{
			prev->next = curr->next;
			free(curr);
			curr = NULL;
			prev = NULL;
			return (1);
		}
	}
}
