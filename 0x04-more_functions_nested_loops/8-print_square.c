#include "main.h"

/**
 *print_square - print square according to the specified size
 *
 *@size: size of square
 */

void print_square(int size)
{
	int height;
	int width;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= size; width++)
		{
			_putchar('#');
		}
		_putchar('\n')
	}
}
