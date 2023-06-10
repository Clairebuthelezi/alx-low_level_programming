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

	if (n == 0 || n == 1)
		return (n);

	int start = 1;
	int end = n;
	int result = -1;

	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
		{
			start = mid + 1;
			result = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (result);
}
