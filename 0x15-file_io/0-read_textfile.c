#include "main.h"

/**
 *read_textfile - read  and print out text written in file
 *@filename: name of file to read
 *@letters: number of bytes to write
 *Return: the bytes read and printed
 */

ssize_t read_textfile(const char *filename, ssize_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
