#include "main.h"

/**
 *_islower - check if input character is in lowercase
 *@c: character input parameter
 *Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
