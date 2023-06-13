#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	size_t len = strlen(str) + 1;
	char *duplicate = malloc(len * sizeof(char));

	if (duplicate != NULL)
		memcpy(duplicate, str, len);

	return (duplicate);
}

