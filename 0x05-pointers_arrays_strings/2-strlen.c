#include "main.h"

/**
 *_strlen - return the lenght of a string
 *@s: pointer to string value
 *Return: The lenght of string
 */

int _strlen(char *s)
{
	int count = 0;
	int i;
	char *str;

	str = s;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}
	return (count);
}
