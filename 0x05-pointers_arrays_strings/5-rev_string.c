#include "main.h"

/**
 *rev_string - reverse strings
 *
 *@s: Stirng pointer argument
 */

void rev_string(char *s)
{
	int size = 0;
	int i, j;
	char tmp;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		size++;
	}
	size = size - 1;

	for (j = 0; j < size; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + size);
		*(s + size) = tmp;
		size--;
	}
}
