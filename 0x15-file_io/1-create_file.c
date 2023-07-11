#include "main.h"

/**
 *create_file - create a new file and write into it
 *@filename: name of file to create
 *@text_content: content to write to the new file
 *Return: 1 if successful, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fdes, state;
	size_t size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size] != '\0';)
			size++;
	}

	fdes = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fdes == -1)
		return (-1);

	if (text_content != NULL)
	{
		state = write(fdes, text_content, (size + 1));
	}

	close(fdes);

	if (state < 0)
		return (-1);

	return (1);
}
