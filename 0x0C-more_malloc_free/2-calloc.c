#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);
	return (ptr);
}
