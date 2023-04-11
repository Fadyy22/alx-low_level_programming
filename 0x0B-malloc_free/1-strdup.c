#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to be copied
 *
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *scpy;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	
	scpy = malloc(sizeof(char) * (i + 1));

	if (scpy == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		scpy[j] = str[j];

	return (scpy);
}
