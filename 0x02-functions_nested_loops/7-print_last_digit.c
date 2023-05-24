#include "main.h"

/**
 *print_last_digit - print the last digit of the input argument
 *@n: number argument
 *Return: Value of last digit
 */

int print_last_digit(int n)
{
	int value;

	if (n < 0)
	{
		n = n * -1;
	}
	value = n % 10;
	_putchar(value + '0');
	return (value);
}
