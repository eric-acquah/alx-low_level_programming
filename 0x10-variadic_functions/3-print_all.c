#include "variadic_functions.h"

/**
 *print_all - print according to custom format specifier
 *
 *@format: format specifier
 */

void print_all(const char * const format, ...)
{
	va_list specifier;
	int idx = 0;
	char *str, *delimeter = ", ";

	va_start(specifier, format);
	if (format == NULL)
	{
		printf("%c", '\0');
		return;
	}
	while (format[idx] != '\0')
	{
		if (idx + 1 > 1)
			printf("%s", delimeter);
		switch (format[idx])
		{
		case 'i':
			printf("%d", va_arg(specifier, int));
			break;
		case 'c':
			printf("%c", (char)va_arg(specifier, int));
			break;
		case 'f':
			printf("%f", va_arg(specifier, double));
			break;
		case 's':
			str = va_arg(specifier, char *);
			switch (str == NULL)
			{
			case 1:
				printf("(nil)");
				break;
			case 0:
				printf("%s", str);
			}
			break;
		default:
			printf("%c", '\0');
		}
		idx++;
	}
	printf("\n");
	va_end(specifier);
}
