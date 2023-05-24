#include "main.h"

/**
 *print_sign - print the value and sign of a given input
 *@n: number argument
 *Return: (0) if value is zero, (1) if greater, (-1) if less
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
