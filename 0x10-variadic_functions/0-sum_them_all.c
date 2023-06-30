#include "variadic_functions.h"

/**
 *sum_them_all - sum all number arguments received
 *@n: number of arguments
 *Return: a sum of numbers all number arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	return (sum);
}
