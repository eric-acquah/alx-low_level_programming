#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	unsigned char *c = (unsigned char *)&i;

	/* If the least significant byte is 1, the machine is little-endian */
	return (*c == 1);
}
