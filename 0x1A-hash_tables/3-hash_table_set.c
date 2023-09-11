#include "hash_tables.h"

/**
 *hash_table_set - insert into a hash table
 *@ht: the pointer to the hash table
 *@key: key to bind value
 *@value: data to be stored
 *Return: 1 if successful else 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_idx;
	hash_node_t *item, *current_item;

	if (key == NULL || ht == NULL)
		return (0); /*Keys cannot be NULL*/

	hash_idx = key_index((unsigned char *)key, ht->size);/*Generates index*/
	item = hash_node_item(key, value);/*Insert values into hash node*/
	item->next = NULL;
	current_item = ht->array[hash_idx];/*point at current head of hash node*/

	if (current_item != NULL)/*Means index is occupied*/
	{
		if (strcmp(current_item->key, key) == 0)
		{/*Handel scenario where key entered is identical*/
			strcpy(current_item->value, value);/*change value only*/
			return (1);
		}
		else
		{/*Handel collision with chainig method*/
			ht->array[hash_idx] = item;/*insert new node at beginning*/
			current_item->next = NULL;
			ht->array[hash_idx]->next = current_item;
			return (1);
		}
	}

	ht->array[hash_idx] = item;/*else just insert new item*/
	return (1);
}
