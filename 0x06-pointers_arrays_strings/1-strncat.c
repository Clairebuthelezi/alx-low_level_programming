#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int t;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	t = 0;
	while (t < n && src[t] != '\0')
	{
	dest[i] = src[t];
	i++;
	t++;
	}
	dest[i] = '\0';
	return (dest);
}
