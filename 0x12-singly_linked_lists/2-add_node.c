#include "lists.h"

/**
 * add_node - adds a new node at
 * the beginning of a list_t list
 *
 * @head: pointer to the head of the
 * linked lists
 * @str: string to be stored
 *
 * Return: address of the new element,
 * or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t no_char;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (no_char = 0; str[no_char] != '\0'; no_char++)
		;

	new_node->len = no_char;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
