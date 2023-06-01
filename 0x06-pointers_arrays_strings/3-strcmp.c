#include "main.h"

/**
 *_strcmp - compare two strings
 *@s1: Points to the first string
 *@s2: Points to the second string
 *Return: (-1) if str1 < str2; (1) if str1 > str2 (0) if both match
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	char *str1 = s1;
	char *str2 = s2;

	for (i = 0; *(str1 + i) != '\0' && *(str2 + i) != '\0'; i++)
	{
		if (*(str1 + i) < *(str2 + i))
		{
			return (-1);
		}
		else if (*(str1 + i) > *(str2 + i))
		{
			return (1);
		}
	}

	return (0);
}
