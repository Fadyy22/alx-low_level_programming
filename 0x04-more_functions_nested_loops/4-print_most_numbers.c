#include "main.h"

/**
 * print_most_numbers - Prints all numbers for 0 to 9
 * except for 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
