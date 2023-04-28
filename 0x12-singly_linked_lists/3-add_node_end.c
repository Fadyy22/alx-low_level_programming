#include "lists.h"

/**
 * add_node_end - adds a new node
 * at the end of a list_t list
 *
 * @head: pointer to the head of the
 * linked list
 * @str: string to be stored
 *
 * Return: address of the new element,
 * or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t no_char;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (no_char = 0; str[no_char] != '\0'; no_char++)
		;

	new_node->len = no_char;
	new_node->next = NULL;

	temp = *head;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
