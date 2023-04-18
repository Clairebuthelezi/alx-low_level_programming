#include "main.h"
/**
 * create_file - Create a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: if the function fails --1.
 * otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, fn ,len
		len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_content[len];)
			len++;
	}

	fd = create(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	fn = write(fd, text_content, len);

	close(fd);

	return (1);
}
