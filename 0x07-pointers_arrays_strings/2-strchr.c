#include "main.h"

/**
 *_strchr - find a match in string
 *@s: pointer to string to be searched
 *@c: Character to find for in string
 *Return: Pointer to string pointerd by 's'
 */

char *_strchr(char *s, char c)
{
	int i, j;
	int count = 0;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		count++;
	}

	for (i = 0; i < (count + 1); i++)
	{
		if (*(s + i) == c)
		{
			s = &(*(s + i));
			return (s);
		}

	}
	return (NULL);
}
