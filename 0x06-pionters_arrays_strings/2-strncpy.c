#include "main.h"

/**
 *_strncpy - copy n number of bytes of characters from src to dest
 *@dest: detination string pointer
 *@src: source string pointer
 *@n: number of bytes to copy
 *Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j, k;
	int count = 0;
	char *str = src;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}

	for (j = 0; j < n && *(str + j) != '\0'; j++)
	{
		*(dest + j) = *(str + j);
	}

	*(dest + j) = '\0';


	for (k = count; k < n; k++)
	{
		*(dest + k) = '\0';
	}

	return (dest);
}
