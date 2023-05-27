#include "main.h"
#include <stdio.h>

/**
 *fizz_buzz - print numbers from 1 to 100;
 *multiples of 3 will be replaced with the string "fizz"
 *and multiples of 5 replaced with "buzz",
 *multiples of both will be "FizzBuzz"
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
