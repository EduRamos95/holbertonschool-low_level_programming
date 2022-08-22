#include "hash_tables.h"

/**
 * hash_table_print - print an entire hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
		for (node = ht->array[index]; node != NULL; node = node->next)
		{
			if (first)
			{
				printf("'%s': '%s'", node->key, node->value);
				first = 0;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
		}
	printf("}\n");
}
