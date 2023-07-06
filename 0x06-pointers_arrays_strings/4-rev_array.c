#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array to reverse
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int counter, *temp;

	temp = malloc(sizeof(int) * n);

	for (counter = 0; counter < n; counter++)
		temp[counter] = a[counter];

	for (counter = 0; counter < n; counter++)
		a[counter] = temp[n - 1 - counter];

	free(temp);
}
