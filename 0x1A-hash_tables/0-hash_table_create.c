#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 * If something went wrong, return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int counter;
	hash_table_t *ht;
	hash_node_t **array;

	ht = malloc(sizeof(hash_node_t));
	if (ht == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = NULL;

	ht->size = size;
	ht->array = array;
	return (ht);
}
