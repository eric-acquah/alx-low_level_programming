#include "main.h"

/**
 *print_rev - Print strings in reverse
 *
 *@s: Stirng pointer argument
 */

void print_rev(char *s)
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
