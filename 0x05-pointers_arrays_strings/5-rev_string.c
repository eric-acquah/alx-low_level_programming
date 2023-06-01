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
	char *src = s;
	char tmp;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		size++;
	}
	size = size - 1;

	for (j = 0; j < size; j++)
	{
		tmp = *(src + j);
		*(src + size) = *(src + j);
		*(src + size) = tmp;
		size--;
	}
}
