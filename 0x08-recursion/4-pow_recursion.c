#include"main.h"
/**
 * _pow_recursion - takes x and y as parameters and returns an integer.
 *
 * @x : value to raise
 * @y : power
 *
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
