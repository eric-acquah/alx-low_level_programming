#include "main.h"

/**
 *_sqrt_recursion - return the natural square root of a number
 *@n: number whose square root is to be found
 *Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	int x = 1;

	if ((x * x) == n)
	{
		return (x);
	}

	return (x = cycle(x, n));
}


/**
 *cycle - process the square root of a number
 *@y: potential square root of n
 *@n: the number whose square root is to be found
 *Return: square root of the number else return -1 otherwise
 */

int cycle(int y, int n)
{

	if ((y * y) == n)
	{
		return (y);
	}
	else if ((y * y) != n && (y * y) < n)
	{
		return (cycle((y + 1), n));
	}

	return (-1);
}
