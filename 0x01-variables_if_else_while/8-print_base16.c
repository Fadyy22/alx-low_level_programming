#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char n;

	char c;

	n = 48;

	c = 'a';

	while (n <= 57)
	{
		putchar(n);
		n = n + 1;
	}
	while (c <= 'f')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
