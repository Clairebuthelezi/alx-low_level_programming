#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

// Define the function pointer type for arithmetic operations
typedef int (*ArithmeticFunc)(int, int);

// Arithmetic functions
int add(int a, int b)
{
	return (a + b);
}

int subtract(int a, int b)
{
	return (a - b);
}

int multiply(int a, int b)
{
	ren
	switch (*op)
	{
		case '+':
			return (add);
		case '-':
			return (subtract);
		case '*':
			return (multiply);
		case '/':
			return divide;
		case '%':
			return modulo;
		default:
			return (NULL);
	}
}

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1, num2;
	char* op;

	if(argc !=4)
