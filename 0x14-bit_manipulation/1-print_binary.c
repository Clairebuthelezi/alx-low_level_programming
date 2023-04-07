#include "main.h"

/**
 * prints - binary representation of a number
 *
 * @n: value to be printed
 */
void print_binary(unsigned long int n)
{
	while (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
