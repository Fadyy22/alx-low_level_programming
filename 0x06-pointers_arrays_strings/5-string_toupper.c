#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string
 * to uppercase
 *
 * @s:String
 *
 * Return: Pointer to the string
 */
char *string_toupper(char *s)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j <= i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
			s[j] = s[j] - 32;
	}
	return (s);
}
