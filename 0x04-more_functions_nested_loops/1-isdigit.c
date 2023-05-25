#include "main.h"


/**
 *_isdigit - check if value is a number
 *@c: input argument for testing
 *Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
