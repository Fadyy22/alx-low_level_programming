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
	int i;

	i = 1;

	_putchar(str[0]);

	while (str[i] != '\0')
	{
		_putchar(str[i + 2]);
		i++;
	}
	_putchar('\n');
}
