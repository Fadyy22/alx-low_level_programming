#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	char lower;

	lower = 'a';

	while (lower <= 'z')
	{
		if (lower == 'q' || lower == 'e')
		{
			lower = lower + 1;
			continue;
		}
		putchar(lower);
		lower = lower + 1;
	}
	putchar('\n');
	return (0);
}
