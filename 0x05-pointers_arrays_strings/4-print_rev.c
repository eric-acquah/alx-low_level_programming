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

	for (i = 0; *(src + i) != '\0'; i++)
	{
		size++;
	}

	for (j = (size - 1); j >= 0; j--)
	{
		_putchar(*(src + j));
	}
	_putchar('\n');
}
