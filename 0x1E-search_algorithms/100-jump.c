#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step, current, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	current = prev = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", current, array[current]);

		if (array[current] == value)
			return (current);
		current += step;
	} while (array[current] < value && current < (int)size);

	prev = current - step;

	printf("Value found between indexes [%d] and [%d]\n", prev, current);

	for (i = prev; i <= current && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
