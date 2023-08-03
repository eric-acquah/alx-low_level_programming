#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	if ((*n & mask) == 0)
	{
		*n |= mask;
		return (1); /* Success: bit was set to 1 */
	}
	else
	{
		return (0); /* No change: bit was already 1 */
	}
}
