#include "main.h"

/**
 *_isupper - Check for uppercase letters
 *@c: Input argument
 *Return: (0) when false (1) otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
