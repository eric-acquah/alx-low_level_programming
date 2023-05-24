#include "main.h"

/**
 *_abs - return the absolute value of the argument
 *@n: argument input value
 *Return: the value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return n;
}
