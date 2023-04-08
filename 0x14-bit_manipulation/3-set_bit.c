#include "main.h"
#include <stdio.h>

/**
 * main - bit to 1 at a given index
 *
 * Return: (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	t = 1 << index;
	return ((*n & ~t) | (t));
}
