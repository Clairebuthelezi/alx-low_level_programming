#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	unsigned int s1_length = strlen(s1);
	unsigned int s2_length = strlen(s2);
	unsigned int concat_length = s1_length + ((n >= s2_length) ? s2_length : n);

	char *result = malloc((concat_length + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	char *ptr = result;

	while (*s1)
		*ptr++ = *s1++;

	while (*s2 && n--)
		*ptr++ = *s2++;

	*ptr = '\0';

	return (result);
}
