#include "main.h"

/**
 * swap_int - Swaps 2 integers
 *
 * @a: First int
 * @b: Second int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
