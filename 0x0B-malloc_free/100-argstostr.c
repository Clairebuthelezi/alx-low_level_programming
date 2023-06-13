#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	size_t total_length = 0;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}

	char *result = malloc((total_length + ac + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	size_t index = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(result + index, av[i]);
		index += strlen(av[i]);
		result[index++] = '\n';
	}

	result[index] = '\0';

	return (result);
}
