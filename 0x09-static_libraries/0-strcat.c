#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	for (; *src != '\0'; ptr++, src++)
		*ptr = *src;

	*ptr = '\0';

	return (dest);
}
