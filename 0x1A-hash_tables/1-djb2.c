#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/**
 *hash_node_item - inserts key and value into the hash node
 *@key: pointer to the key
 *@value: pointer to value
 *Return: a pointer to the newly created hash node
 */

hash_node_t *hash_node_item(const char *key, const char *value)
{
	hash_node_t *item;

	if (key == NULL)
		return (NULL);

	item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (NULL);

	item->key = (char *)malloc(strlen(key) + 1);
	item->value = (char *)malloc(strlen(value) + 1);
	if (value == NULL)
	{
		free(item->key);
		return (NULL);
	}
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
