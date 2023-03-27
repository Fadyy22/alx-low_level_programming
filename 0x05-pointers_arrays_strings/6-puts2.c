#include "main.h"

/**
 * puts2 - Prints every other character of a string
 *
 * @str: String to be printed
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, j;

	i = 1;
	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	j--;

	_putchar(str[0]);

	while (str[i] != '\0')
	{
		if (i + 1 > j)
			break;

		_putchar(str[i + 1]);
		i = i + 2;
	}
	_putchar('\n');
}
