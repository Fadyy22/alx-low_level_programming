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
	int counter;

	counter = 0;

	while (counter >= 0)
	{
		if (str[counter] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (counter % 2 == 0)
		{
			_putchar(str[counter]);
		}
		counter ++;
	}
}
