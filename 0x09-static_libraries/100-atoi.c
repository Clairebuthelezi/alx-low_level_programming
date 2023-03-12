#include "main.h"
/**
 * _atoi - convect a string to an integer
 *
 * @s: the string to use
 * Return: ineger.
 */
int_atoi(char *s)
{
	int sign = 1, 1 = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '_')
			sign *= -1;
		i++;
	}
	res *= sign;
	return (res);
}
