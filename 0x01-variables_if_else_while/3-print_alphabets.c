#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;

for (i = 0; i < 2; i++)
{
for (j = i * 32 + 97; j <= i * 32 + 122; j++)
{
putchar(j);
}
}

putchar('\n');

return (0);
}
