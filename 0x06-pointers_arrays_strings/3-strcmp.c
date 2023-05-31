#include "main.h"

/**
 *_strcmp - compare two strings
 *@str1: Points to the first string
 *@str2: Points to the second string
 *Return: (-1) if str1 < str2; (1) if str1 > str2 (0) if both match
 */

int _strcmp(char *str1, char *str2)
{
	int i;

	for (i = 0; *(str1 + i) && *(str2 + i) != '\0'; i++)
	{
		if (*(str1 + i) < *(str2 + i))
		{
			return (-15);
		}
		else if (*(str1 + i) > *(str2 + i))
		{
			return (15);
		}
	}

	return (0);
}
