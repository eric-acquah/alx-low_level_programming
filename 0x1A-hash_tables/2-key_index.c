#include "hash_tables.h"

/**
 *key_index - Get index of an array for a key-value pair
 *@key: the key for generating hash code
 *@size: size of the given hash table array
 *Return: The generated index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code, neg = 0;

	if (size <= neg || key == NULL)
		return ((neg = -1));

	hash_code = hash_djb2((unsigned char *)key);
	hash_code %= size;
	return (hash_code);
}
