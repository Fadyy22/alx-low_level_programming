#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char *sep;

	if (ht == NULL)
		return;
	else
	{
		sep = "";
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] == NULL)
				continue;
			else
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					printf("%s'%s': '%s'", sep, temp->key, temp->value);
					sep = ", ";
					temp = temp->next;
				}
				temp = NULL;
			}
		}
	}
	printf("}\n");
}
