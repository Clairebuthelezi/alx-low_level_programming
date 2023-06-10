#include "main.h"
/**
 * _strncat - concatenates two strings, up to n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to be concatenated
 *
 * Return: pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && (*ptr++ = *src++));

	*ptr = '\0';

	return (dest);
}
