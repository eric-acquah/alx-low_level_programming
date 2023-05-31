#include "main.h"

/**
 *_strncat - Append n bytes of strings in src to dest
 *@dest: destination string pointer
 *@src: source string pointer
 *@n: number of bytes to extract
 *Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int count = 0;
	char *str = dest;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}

	for (j = 0; (j < n) && (*(src + j) != '\0'); j++)
	{
		*(str + count) = *(src + j);
		str++;
	}

	*(str + (count + 1)) = '\0';
	str++;

	return (dest);
}
