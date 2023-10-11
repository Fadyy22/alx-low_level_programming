#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: array to print
 * @start: start of the array
 * @end: end of the array
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: %d", array[start]);
	for (i = start + 1; i <= end; i++)
	{
		printf(", %d", array[i]);
	}
	printf("\n");
}

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: First index where value is located or -1 if value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, low, mid, high;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;

	while (array[i] < value && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	low = i / 2;
	high = i >= (int)size ? (int)size - 1 : i;

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
