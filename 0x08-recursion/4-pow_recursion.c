#include "main.h"

/**
 *_pow_recursion - Return the exponent of a number
 *@x: Argument of value whose exponent will be evaluated
 *@y: Exponent argument
 *Return: (-1) if y is < 0, else return x exponent y
 */

int _pow_recursion(int x, int y)
{
	/*if 'y' < 0 return -1 to show there was an error*/
	if (y < 0)
	{
		return (-1);
	}
	/*Base condition; if 'y' is 0, return 1*/
	else if (y == 0)
	{
		return (1);
	}

	/*Recursive case; 'x' multiplies the return value of the function*/
	return (x * _pow_recursion(x, (y - 1)));
}
