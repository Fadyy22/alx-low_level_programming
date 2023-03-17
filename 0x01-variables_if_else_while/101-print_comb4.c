#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n_1, n_2, n_3;

	n_1 = 48;

	while (n_1 <= 57)
	{
		n_2 = 48;
		while (n_2 <= 57)
		{
			n_3 = 48;
			while (n_3 <= 57)
			{
				if (n_1 != n_2 && n_1 != n_3 && n_2 != n_3 && n_1 < n_2 && n_2 < n_3)
				{
					putchar(n_1);
					putchar(n_2);
					putchar(n_3);
					if (n_1 == 55 && n_2 == 56 && n_3 == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				n_3++;
			}
			n_2++;
		}
		n_1++;
	}
	putchar('\n');
	return (0);
}
