#include "main.h"

/**
 * print_times_table - Prints n times table
 *
 * @n: Input to print table times it
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, ij;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				ij = i * j;
				_putchar(44);
				_putchar(32);
				if (ij <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putcchar(ij + 48)
				}
				else if (ij <= 99)
				{
					_putchar(32);
					_putchar((ij / 10) + 48);
					_putchar((ij % 10) + 48);
				}
				else
				{
					_putchar((ij / 100) + 48);
					_putchar(((ij / 10) % 10) + 48);
					_putchar((ij % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
