#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit;
	int to_int, len, weight;

	unit = 0;
	weight = 1;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	len--;

	for (; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		to_int = b[len] - '0';
		unit = unit + to_int * weight;
		weight = weight * 2;
	}
	return (unit);
}
