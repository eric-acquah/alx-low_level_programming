#include "dog.h"

/**
 *_strcpy - copy strings from src to dest
 *@dest: destination string
 *@src: source string
 *Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL || src == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}


/**
 *_strlen - get the lenght of a string
 *@str: input string
 *Return: lenght of string
 */

int _strlen(char *str)
{
	int count;

	for (count = 0; str[count] != '\0';)
		count++;

	return (count);
}
