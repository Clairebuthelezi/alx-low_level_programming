#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: the size of array
 * @c: char to assign
 * Description: creat array of size size and assign char c
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	unsigned int i = 0;

	do {
		str[i] = c;
		i++;
	} while (i < size);
	return (str);
}
