#include "main.h"

/**
 * _strlen - Returns the length of a string
 *
 * @s: String
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i, counter;

	i = 0;
	counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
