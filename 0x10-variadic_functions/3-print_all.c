#include "variadic_functions.h"
/**
 *print_all - print according to custom format specifier
 *@format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list specifier;
	int idx = 0;
	char *str;
	char const *d = "";

	va_start(specifier, format);
	if (format != NULL)
	{
		while (format[idx] != '\0')
		{
			switch (format[idx])
			{
			case 'i':
				printf("%s%d", d, va_arg(specifier, int));
				d = ", ";
				break;
			case 'c':
				printf("%s%c", d, (char)va_arg(specifier, int));
				d = ", ";
				break;
			case 'f':
				printf("%s%f", d, va_arg(specifier, double));
				d = ", ";
				break;
			case 's':
				str = va_arg(specifier, char *);
				switch (str == NULL)
				{
				case 1:
					printf("%s(nil)", d);
					d = ", ";
					break;
				case 0:
					printf("%s%s", d, str);
					d = ", ";
				}
			}
			idx++;
		}
	}
	printf("\n");
	va_end(specifier);
}
