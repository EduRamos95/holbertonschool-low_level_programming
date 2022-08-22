#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table.
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *new_ht;
	hash_node_t **array;

	if (size <= 0)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(new_ht);
		return (NULL);
	}

	newtable->size = size;
	for (index = 0; index < size; index++)
		array[index] = NULL;

	new_th->size = size;
	new_th->array = array;
	return (new_th);
}
