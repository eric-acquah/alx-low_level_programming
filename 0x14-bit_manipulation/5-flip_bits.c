#include "main.h"

/**
 * flip_bits - find the number to change before flip
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int recent_bit;
	unsigned long int xor = n ^ m;

	for (i = 63; i >= 0; i--)
	{
	        recent_bit = xor >> i;
		if (recent_bit & 1)
			count++;
	}

	return (count);
}
