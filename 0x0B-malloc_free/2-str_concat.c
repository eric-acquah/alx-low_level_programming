#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatinate strings and store it in a new buffer
 *@str1: first string argument
 *@str2: second string argument
 *Return: pointer to buffer containing concatinated string
 */

char *str_concat(char *str1, char *str2)
{
	int i, j, size;
	int len1, len2;
	char *strbuf;

	len1 = str_len(str1);
	len2 = str_len(str2);
	size = len1 + len2;

	strbuf = (char *)malloc(sizeof(char) * (size + 1));

	if (strbuf == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(strbuf + i) = *(str1 + i);
	}

	for (j = 0; j < len2; j++)
	{
		*(strbuf + (len1 + j)) = *(str2 + j);
	}

	*(strbuf + (size + 1)) = '\0';

	return (strbuf);
}

/**
 *str_len - return the lenght of a string
 *@str: string argument
 *Return: lenght of string
 */

int str_len(char *str)
{
	int i;
	int count = 0;

	for (i = 0; *(str + i) != '\0'; i++)
		count++;

	return (count);
}
