#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: String to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i + 1 >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
