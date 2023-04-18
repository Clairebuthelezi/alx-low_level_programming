#define _POSIX_SOURCE
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#undef _POSIX_SOURCE
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: fd
 */
int create_file(const char *filename, char *text_content)
{
	char fn[] = "creat.file", text[] = "This is a test";
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for ((fd = creat(fn, S_IRUSR | S_IWUSR)) < 0)
			perror("creat() error");
	}

	else
	{
		write(fd, text, strlen(text));
		close(fd);
		unlink(fn);
	}
	return (fd);
}
