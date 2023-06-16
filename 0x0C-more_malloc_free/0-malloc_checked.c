#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	do {
		ptr = malloc(b);
		if (ptr == NULL)
		{
			fprintf(stderr, "malloc failed, terminating process with status 98\n");
			exit(98);
		}
	} while (0);
	return (ptr);
}
