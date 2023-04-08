#include "main.h"
#include <stdio.h>

/**
 * set_index - bit to 1 at a given index
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 * Return: (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);

	t = 1 << index;
	*n = (*n | t);
	return ((*n & ~t) | (t));
}
