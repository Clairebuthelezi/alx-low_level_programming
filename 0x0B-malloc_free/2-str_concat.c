#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	concat = strdup(s1);

	if (concat == NULL)
		return (NULL);

	concat = realloc(concat, (strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (concat == NULL)
		return (NULL);

	strcat(concat, s2);

	return (concat);
}
