#include "main.h"

/**
 *factorial - return the factorial of a number
 *@n: number argument
 *Return: (-1) if value is less than 0, else return the factorail of the number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
