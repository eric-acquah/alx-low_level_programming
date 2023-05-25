#include "main.h"

/**
 *print_line - print under scores n number of times
 *@n: number of times to print '_'
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
