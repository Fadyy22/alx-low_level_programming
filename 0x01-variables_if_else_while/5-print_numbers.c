#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	n = 0;

	while (n <= 9)
	{
		printf("%d", n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
