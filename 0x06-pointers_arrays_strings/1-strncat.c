#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, counter;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
		dest[dest_len + counter] = src[counter];

	dest[dest_len + counter] = '\0';
	return (dest);
}
