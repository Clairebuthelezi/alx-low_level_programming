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
	size_t len;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate)
	{
		strcpy(duplicate, str);
		return (duplicate);
	}
	return (NULL);
}
