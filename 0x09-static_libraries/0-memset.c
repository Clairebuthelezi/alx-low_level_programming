#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value
 * @s: Pointer to the memory block to be filled
 * @b: The value to be set
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory block `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		*s = b;
		_memset(s + 1, b, n - 1);
	}

	return (s);
}
