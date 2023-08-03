#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint - convert binary numbers into unsigned integer
 *@b: pointer to strings of 1s and 0s
 *Return: converted number
 */

unsigned int binary_to_uint(char *b)
{
	int j, bit;
	unsigned int binum = 0, covnum = 0, k;

	if (b == NULL)
		return (0);

	/*This loop converts the binary to it's corresponding digit*/
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] >= '0' && b[j] <= '1')/*Ensuring that the value is a binary*/
		{
			binum = binum * 2 + (b[j] - '0');
		}
		else
			return (0);
	}

	/*Loop to convert binary to it's corresponding unsigned integer*/
	for (k = 0; k < sizeof(unsigned int) * 8; k++)
	{/*The loop runs according to the number of bits in an unsigned int (32x)*/
		bit = binum & 1;/*this statement extracts the last significant bit*/
		if (bit == 1)
		{
			covnum += (1 << k);/*this gets the power(^) of the current*/
			/*bit's position and adds it to the decimal number(covnum) */
		}
		binum =  (binum >> 1);/*dicards the previous last significant bit*/
	}

	return (covnum);
}
