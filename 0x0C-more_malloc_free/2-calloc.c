#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocate memory sapce for an array
 *@nmemb: number of array elements
 *@size: size of each array element
 *Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allo;

	if (nmemb == 0 || size == 0)
		return (NULL);

	allo = malloc(nmemb * size);

	if (allo == NULL)
		return (NULL);

	return (allo);
}
