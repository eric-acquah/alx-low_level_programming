#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *_realloc - resize a memory block
 *@ptr: pointer to prevoius memory block
 *@new_size: size of new memory block
 *@old_size: size of prevoius memory block
 *Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	void *resize;
	char *old_clone;
	char *new_clone;

	if (new_size == 0 && ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	resize = malloc(new_size);
	if (resize == NULL)
		return (NULL);

	if (ptr == NULL)
		ptr = resize;

	new_clone = (char *)resize;
	old_clone = (char *)ptr;

	for (j = 0; j < new_size && j < old_size; j++)
		new_clone[j] = old_clone[j];

	return (resize);
}
