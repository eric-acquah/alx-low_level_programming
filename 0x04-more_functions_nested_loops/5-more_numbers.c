#include "main.h"

/**
 *more_numbers - print numbers from 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j;
	char run[] = "1234567891011121314";

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; run[j] != '\0'; j++)
		{
			_putchar(run[i]);
		}
		_putchar('\n');
	}
}
