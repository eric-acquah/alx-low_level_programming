#include <stdio.h>

/**
 *main - print sizes of data types
 *
 *Return: 0 (Success)
 */

int main(void)
{
	int sizeint = sizeof(int);
	int sizechar = sizeof(char);
	int sizelong = sizeof(long);
	int sizelong2 = sizeof(unsigned long);
	int sizefloat = sizeof(float);

	printf("Size of char: %d byte(s)\n", sizechar);
	printf("Size of an int: %d byte(s)\n", sizeint);
	printf("Size of a long int: %d byte(s)\n", sizelong);
	printf("Size of a long long int: %d byte(s)\n", sizelong2);
	printf("Size of a float: %d byte(s)\n", sizefloat);
	return (0);
}
