#include "main.h"

/**
 *_strchr - find the 1st match of the specified character in a string
 *@s: pointer to string to be searched
 *@c: Character to find for in the string
 *Return: Pointer to string pointed by 's'
 */

char *_strchr(char *s, char c)
{
	int i, j;
	int count = 0;

	/*Get the lenght of the string*/
	for (j = 0; *(s + j) != '\0'; j++)
	{
		count++;
	}

	/*Loop over string to find a match*/
	for (i = 0; i <= count; i++)
	{
		/*If match is found return the string to the string pointer*/
		if (*(s + i) == c)
		{
			s = &(*(s + i));
			return (s);
		}

	}

	/*If no match is found return NULL to the string pointer*/
	return (NULL);
}
