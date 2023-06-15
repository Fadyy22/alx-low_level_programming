#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: pointer to the head of the double linked list
 * @n: int to be stored in the new linked list
 *
 * Return: address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	(*head) = new_node;

	return (*head);
}
