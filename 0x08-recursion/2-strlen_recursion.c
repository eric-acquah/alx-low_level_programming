#include "main.h"

/**
 *_strlen_recursion - Return the length of a string
 *@s: string pointer argument
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	int count = 0;

	if (*(s + i) == '\0')
	{
		return (count);
	}

	return (_strlen_recursion(*(s + (i + 1)) + count);
}
