#include "main.h"

/**
 *print_numbers - print numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int val;

	for (val = '0'; val <= '9'; val++)
	{
		_putchar(val);
	}
	_putchar('\n');
}
