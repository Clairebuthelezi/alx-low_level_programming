#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of base 10
 * Starting from 0, followed by a new line.
 * Return: always 0 (Success)
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 +c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ')
		}
		c++;
	}
