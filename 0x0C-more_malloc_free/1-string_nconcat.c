#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2
 *
 * Return: pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcon;
	unsigned int ls1, ls2, lstrcon, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lstrcon = ls1 + n;

	strcon = malloc(sizeof(char) * (lstrcon + 1));

	if (strcon == NULL)
		return (NULL);

	for (i = 0; i < lstrcon; i++)
	{
		if (i < ls1)
			strcon[i] = s1[i];
		else
			strcon[i] = s2[i - ls1];
	}

	strcon[i] = '\0';

	return (strcon);
}
