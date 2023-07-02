#include "variadic_functions.h"

/**
 *print_strings - print strings passed to the functon
 *@separator: string seperator
 *@n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i;
	char *str;

	va_start(words, n);

	for (i = 0; i < n; i++)
	{
		str = (char *)va_arg(words, int *);
		if (separator == NULL)
			separator = "\0";
		if (str == NULL)
			printf("(nil)");
		if (i < n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(words);
}
