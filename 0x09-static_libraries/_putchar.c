#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success, the character written. On error, -1 is returned
 */
int _putchar(char c)
{
	return (putchar((int)c));
}
