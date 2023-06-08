#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the sqaure root of
 *
 * Return: he square root of the number, -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	int start = 0, end = n;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;
		int square = mid * mid;

		if (square == n)
			return (mid);
		else if (square < n)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}


