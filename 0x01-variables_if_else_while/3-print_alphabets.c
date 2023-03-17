#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char lower;

	char upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower = lower + 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper = upper + 1;
	}
	putchar('\n');
	return (0);
}
