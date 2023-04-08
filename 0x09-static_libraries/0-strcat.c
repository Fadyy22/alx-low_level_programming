#include "main.h"

/**
 * _strcat - Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, counter;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		j++;
	}
	j--;

	for (counter = 0; counter <= j; counter++)
	{
		dest[i + counter] = src[counter];
	}
	dest[i + counter] = '\0';

	return (dest);
}
