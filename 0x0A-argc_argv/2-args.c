#include <stdio.h>
#include "main.h"

/**
 * main -prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n", argv[t]);
	}

	return (0);
}
