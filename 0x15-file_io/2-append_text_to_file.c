#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL --1.
 *     Otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	FILE *fp;

	fp = fopen("file.txt", "a");
	_putchar(fp, "This is appended text.\n");
	fclose(fp);

	return (0);
}
