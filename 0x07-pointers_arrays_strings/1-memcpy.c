#include "main.h"

/**
 *_memcpy - copy n bytes of blocks of memory from src to dest
 *@dest: destination memory area
 *@src: source memory area to copy from
 *@n: number of bytes to copy
 *Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
