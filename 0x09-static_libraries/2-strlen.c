#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *(s + length); length++)
		;

	return (length);
}

