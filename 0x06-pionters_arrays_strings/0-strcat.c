#include "main.h"

/**
 *_strcat - Append the string pointed by src to the  one pointed by dest
 *@dest: pointer to destination string
 *@src: pointer to source string
 *Return: Pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	int count = 0;
	char *str = dest;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		count++;
	}

	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(str + (count)) = *(src + j);
		*str++;
	}
	*(str + count) = '\0';
}
