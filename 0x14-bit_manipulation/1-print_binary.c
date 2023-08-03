#include "main.h"
/**
 *print_binary - convert decimal numbers to binary and print the value
 *
 *@n: binary number argument
 */
void print_binary(unsigned long int n)
{
	int i, bit;
	unsigned long int bimask;
	int bitsize = sizeof(n) * 8;
	int firstbit = 1;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	/*this shift the significant bit set in 1 to the left=>(100000000)*/
	bimask = 1UL << (bitsize - 1);/*UL(unsigned long) it ensure*/
	/*correct binary value*/

	for (i = 0; i < bitsize; i++)
	{
		bit = (n & bimask) >> (bitsize - 1 - i);

		if (firstbit && bit)/*This how we get rid of leading zeros*/
		{
			firstbit = 0;
			_putchar(bit + '0');
		}
		else if (firstbit == 0)
		{
			_putchar(bit + '0');
		}

		/*Shifts to next bit in number to work on*/
		bimask = bimask >> 1;

	}

}
