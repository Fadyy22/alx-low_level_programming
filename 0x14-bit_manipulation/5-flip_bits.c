#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter;
	unsigned long int curr;
	unsigned long int XOR;

	counter = 0;
	XOR = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = XOR >> i;
		if (curr & 1)
			counter++;
	}
	return (counter);
}
