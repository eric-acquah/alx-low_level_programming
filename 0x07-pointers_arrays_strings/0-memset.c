#include "main.h"

/**
 *_memset - fill the first n bytes of target memory area with constant bytes
 *@s: pointer to target memory area
 *@b: constant bytes to fill with
 *@n: number of filling bytes to be assigned
 *Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
