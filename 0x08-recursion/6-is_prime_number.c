#include "main.h"

/**
 *is_prime_number - return 1 if given number is a prime number
 *@n: number to test
 *Return: 1 if arg is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n < 2)
		return (0);

	else if ((n % div) == 0)
		return (0);
	else
		return (cycle1(n, div));
}
/**
 *cycle1 - oprerate on numbers
 *@n: number to test
 *@x: potential divisor
 *Return: 1 if n is prime number, o otherwise
 */

int cycle1(int n, int x)
{
	if (x * x > n)
		return (1);

	else if ((n % x) == 0)
		return (0);
	else
		return (x = cycle1(n, (x + 1)));
}
