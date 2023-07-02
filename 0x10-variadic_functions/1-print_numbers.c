#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - print numbers extracted from the argument list
 *@separator: arguments separator
 *@n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list figures;
	unsigned int i, digit;

	va_start(figures, n);

	for (i = 0; i < n; i++)
	{
		digit = va_arg(figures, int);

		if (separator == NULL)
			separator = "\0";
		if (i < n - 1)
			printf("%d%s", digit, separator);
		else
			printf("%d", digit);
	}
	printf("\n");
	va_end(figures);
}
