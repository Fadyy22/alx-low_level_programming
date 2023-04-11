#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer should point to a newly allocated space
 * in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *strconcat;
	int i, j, k, l;

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	strconcat = malloc((sizeof(char) * i) + (sizeof(char) * j));

	if (strconcat == NULL)
		return (NULL);

	for (k = 0; k <= i; k++)
		strconcat[k] = s1[k];

	for (l = 0; l <= j; l++)
		strconcat[i + l] = s2[l];

	return (strconcat);
}
