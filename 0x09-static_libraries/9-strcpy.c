#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int t = 0;


	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; t < l ; t++)
	{
		dest[t] = src[t];
	}
	dest[l] = '\0';
	return (dest);
}
