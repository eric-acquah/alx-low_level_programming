#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - validate return value of malloc function
 *@b: size of space to allocate
 *Return: pointer to allocated space in memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
