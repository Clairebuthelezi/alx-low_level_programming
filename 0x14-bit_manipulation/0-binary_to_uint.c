#include "main.h"
#include <stddef.h>

/**
 * main - converts a binary number to an unsigned int
 *
 * Return : 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		ui <<= 1;
		ui += b[i] - '0';
		i++;
	}
	return (ui);
}
