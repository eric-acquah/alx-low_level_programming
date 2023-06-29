#include <stdio.h>

/**
 *main - print name of programme
 *@argc: count of arguments
 *@argv: array of strings
 *Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
