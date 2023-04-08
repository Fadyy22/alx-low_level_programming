#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: First string
 * @s2: Second String
 *
 * Return: <0 if s1 < s2
 * >0 if s1 > s2
 * 0 if s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;

	result = 0;

	while (result == 0)
	{
		if ((s1[i] == '\0') && (s2[i]) == '\0')
			break;

		result = s1[i] - s2[i];

		i++;
	}
	return (result);
}
