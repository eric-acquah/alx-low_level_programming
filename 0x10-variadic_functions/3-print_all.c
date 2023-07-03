#include "variadic_functions.h"
/**
 *print_all - print according to custom format specifier
 *@format: format specifier
 */
void print_all(const char * const format, ...)
{
	va_list specifier;
	int idx = 0, sum = 0;
	char *str, *d = ", ";

	va_start(specifier, format);
	if (format != NULL)
	{
		while (format[idx] != '\0')
		{
			switch (format[idx])
			{
			case 'i':
				printf("%d%s", va_arg(specifier, int), d);
				break;
			case 'c':
				printf("%c%s", (char)va_arg(specifier, int), d);
				break;
			case 'f':
				printf("%f%s", va_arg(specifier, double), d);
				break;
			case 's':
				str = va_arg(specifier, char *);
				switch (str == NULL)
				{
				case 1:
					printf("(nil)%s", d);
					break;
				case 0:
					printf("%s%s", str, d);
				}
				break;
			}
			sum += idx++;
			if (idx < sum - 1)/*add ", " excluding the last value to print*/
				d = "\0";
		}
	}
	printf("\n");
	va_end(specifier);
}
