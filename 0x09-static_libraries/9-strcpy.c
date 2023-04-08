#include "main.h"

/**
 * _strcpy - Copies string pointed to by src to the buffer pointed to by dest
 *
 * @src: Source string
 * @dest: Destination string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	dest[i + 1] = '\0';

	return (dest);
}
