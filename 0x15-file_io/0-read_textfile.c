#include "main.h"

/**
 *read_textfile - read  and print out text written in file
 *@filename: name of file to read
 *@letters: number of bytes to write
 *Return: the bytes read and printed
 */

ssize_t read_textfile(const char *filename, ssize_t letters)
{
	int fdis;
	ssize_t read_count, write_count;
	char *holder;

	if (filename == NULL)
		return (0);

	holder = (char *)malloc(sizeof(char) * letters);
	if (holder == NULL)
		return (0);

	fdis = open(filename, O_RDONLY);
	if (fdis == -1)
		return (0);

	read_count = read(fdis, holder, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, holder, sizeof(char) * read_count);
	if (write_count == -1)
		return (0);
	free(holder);
	return (write_count);
}
