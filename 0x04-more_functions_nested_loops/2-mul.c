#include "main.h"

/**
 *mul - multiply two values
 *@a: first operand
 *@b: second operand
 *Return: value of result
 */

int mul(int a, int b)
{
	int val;

	val = a * b;
	_putchar(val - '0');
	return (val);
}
