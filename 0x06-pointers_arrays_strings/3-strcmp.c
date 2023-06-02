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
	int diff;
	int diff_inverse;

	for (i = 0; *(s1 + i) != '\0' && *(s2 + i) != '\0'; i++)
	{
		if (*(s1 + i) < *(s2 + i))
		{
			diff = *(s1 + i) - *(s2 + i);
			return (diff);
		}
		else if (*(s1 + i) > *(s2 + i))
		{
			diff_inverse = *(s1 + i) - *(s2 + i);
			return (diff_inverse);
		}
	}

	return (0);
}
