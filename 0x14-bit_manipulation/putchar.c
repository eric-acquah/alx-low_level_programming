#include "main.h"
#include <unistd.h>

/**
 *_putchar - write to the console
 *@c: buffer with char
 *Return: number of bits written
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
