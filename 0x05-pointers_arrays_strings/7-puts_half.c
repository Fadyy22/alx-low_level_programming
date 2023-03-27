#include "main.h"

/**
 * puts_half - Prints half of a string
 *
 * @str: String to print half of it
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		j = i / 2;
	}
	else
	{
		j = (i / 2) + 1;
	}

	i--;

	while (j < = i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
