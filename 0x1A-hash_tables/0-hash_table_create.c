#include "hash_tables.h"

/**
 *hash_table_create - create a new hash table
 *@size: size of array
 *Return: a pointer to the newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
		return (NULL);

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size; /*Initialize the size of the array*/

	/*Allocate memory for each block of the array*/
	table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t **));
	if (table == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
