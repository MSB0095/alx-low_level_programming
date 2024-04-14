#include "hash_tables.h"
/**
 * hash_table_create - creates and inits a hash table
 * @size: the size
 * Return: the table or NULL if failed
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;
	hash_node_t **array;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	array = malloc(size * sizeof(hash_node_t *));
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = array;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
