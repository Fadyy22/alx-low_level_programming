#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data(n)
 * of a dlistint_t linked list
 *
 * @head: head of the double linked list
 *
 * Return: sum of all the data, if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (NULL);

	temp = head;
	sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
