#include "main.h"
#include "string_manipulators.h"
#include <stdlib.h>

/**
 *argstostr - concatenate all arguments passed to main function
 *@ac: argument count
 *@av: argument vector
 *Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len_total;
	char *str_store;

	len_total = 0;

	for (i = 0; i < ac; i++)
	{
		len_total += arg_len(av[i]);
	}

	str_store = (char *)malloc(sizeof(int) * (len_total + 1));

	for (j = 0; j < len_total; j++)
		str_store[j] = '\0';

	str_store[j] = '\0';
	for (k = 0; k < ac; k++)
	{
		if (*str_store == '\0')
			_strcpy(str_store, av[k]);
		else
			_strcat(str_store, av[k]);
	}

	return (str_store);
}
