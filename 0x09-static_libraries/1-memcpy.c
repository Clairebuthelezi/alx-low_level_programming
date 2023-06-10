#include "main.h"
/**
 * _memcpy - copies a specified number of bytes from source to destination
 * @dest: pointer to the destination memory
 * @src: pointer to the source memory
 * @n: number of bytes to be copied
 *
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	const char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
