/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *     pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The charecter to fill the memory are with.
 * @n: The number of bytes to be filled.
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s.
 *
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	retun(memory);
}
