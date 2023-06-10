#include "main.h"
#include <stddef.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		int i = 0;

		while (haystack[i] == needle[i] && needle[i])
			i++;

		if (needle[i] == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
