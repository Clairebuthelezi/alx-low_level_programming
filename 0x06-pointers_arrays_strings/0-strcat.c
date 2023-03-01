#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int t;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	t = 0;
	while (src[t] != '\0')
	{
		dest[i] = src[t];
		i++;
		t++;
	}

	dest[i] = '\0';
	return (dest);
}
