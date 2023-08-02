#include <stdio.h>
#include <string.h>

/**
 * Helper function -to check if a substring is a palindrome recursively.
 *
 * @start - Pointer to the start of the substring.
 * @end - Pointer to the end of the substring.
 *
 * Base case: the substring is a palindrome
 * If characters don't match, it's not a palindrome
 *
 * @return 1 if the substring is a palindrome, 0 otherwise.
 */

int is_palindrome_helper(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}

	if (*start != *end)
	{
		return (0);
	}

	return (is_palindrome_helper(start + 1, end - 1));
}

/**
 * Checks if a given string is a palindrome.
 *
 * @s The input string.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_helper(s, s + length - 1));
}
