#include "main.h"

/**
 *_puts - prints string to standard output followed by a new line
 *
 *@str: string pointer arguement
 */

void _puts(char *str)
{
	int i;
	char *s = str;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
