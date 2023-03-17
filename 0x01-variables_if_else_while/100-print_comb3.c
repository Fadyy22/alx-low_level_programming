#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n_1;

	int n_2;

	n_1 = 48;

	while (n_1 <= 57)
	{
		n_2 = 48;

		while (n_2 <= 57)
		{
			if (n_1 != n_2 && n_1 < n_2)
			{
				putchar(n_1);
				putchar(n_2);
				if (n_1 == 56 && n_2 == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			n_2++;
		}
		n_1++;
	}
	putchar('\n');
	return (0);
}

