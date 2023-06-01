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

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			return (-15);
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			return (15);
		}
	}

	return (0);
}
