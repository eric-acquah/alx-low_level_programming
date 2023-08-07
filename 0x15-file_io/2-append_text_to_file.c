#include "main.h"

/**
 *append_text_to_file - append content to an existing file
 *@filename: name of file to append to
 *@text_content: content to append to file
 *Return: 1 on success else -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, byts_writen;
	size_t size;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size] != '\0';)
			size++;
	}

	fdes = open(filename, O_APPEND | O_RDWR);
	if (fdes == -1)
		return (-1);

	if (text_content != NULL)
	{
		byts_writen = write(fdes, text_content, size);
	}

	close(fdes);

	if (byts_writen < 0)
		return (-1);

	return (1);
}
