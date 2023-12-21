#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @table_size: size of the hash table
 *
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int table_size)
{
	hash_table_t *new_table;

	if (table_size == 0)
        return (NULL);

	new_table = calloc(1, sizeof(hash_table_t));
	if (new_table == NULL)
	return (NULL);

	new_table->size = table_size;
	new_table->array = calloc(table_size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
	free(new_table);
	return (NULL);
	}
	return (new_table);
}
