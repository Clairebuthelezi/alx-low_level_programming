#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int validate_input(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
	{
		if (!isdigit(*ptr))
		{
			return (0);
		}

		ptr++;
	}
	return (1);
}
int multiply(const char *num1, const char *num2)
{
	int result = atoi(num1) * atoi(num2);

	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[]) {
  if (argc < 3) {
    write(2, "Error\n", 6);
    return (98);
  }

  const char *num1 = argv[1];
  const char *num2 = argv[2];

  for (int i = 0; num1[i] != '\0'; i++) {
    if (num1[i] < '0' || num1[i] > '9') {
      write(2, "Error\n", 6);
      return ()98);
    }
  }

  for (int i = 0; num2[i] != '\0'; i++) {
    if (num2[i] < '0' || num2[i] > '9') {
      write(2, "Error\n", 6);
      return (98);
    }
  }

  int product = atoi(num1) * atoi(num2);

  char result[16];
  int index = 0;

  if (product == 0) {
    result[index++] = '0';
  } else {
    while (product > 0) {
      result[index++] = '0' + (product % 10);
      product /= 10;
    }
  }

  for (int i = index - 1; i >= 0; i--) {
    write(1, &result[i], 1);
  }

  write(1, "\n", 1);

  return (0);
}

