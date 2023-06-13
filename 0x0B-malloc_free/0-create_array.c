#include <stdlib.h>
#include "main.h"

/**
 *create_array - create and initialize an of defined size
 *@size: size of buffer
 *@c: char to initialize buffer
 *Return: array to pointer upon success otherwise return NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
