#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * index of a dlistint_t linked list
 *
 * @head: pointer to the head of the double linked list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
	}
	else
	{
		for (i = 0; i < index - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp2 = temp->next;
		if (temp->next->next == NULL)
		{
			temp->next = NULL;
			free(temp2);
		}
		else
		{
			temp->next = temp->next->next;
			temp2->next->prev = temp;
			free(temp2);
		}
	}
	return (1);
}
