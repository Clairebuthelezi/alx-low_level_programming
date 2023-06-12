#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int numArguments = argc - 1;

	printf("%d\n", numArguments);

	return (0);
}
