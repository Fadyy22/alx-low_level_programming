#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (ht->array[i] == NULL)
			continue;
		else
		{
			temp = head;
			while (temp != NULL)
			{
				temp = temp->next;
				free(head->key);
				free(head->value);
				free(head);
				head = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
