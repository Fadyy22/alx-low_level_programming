#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 *
 * @a: Array to be printed
 * @n: Number of elements of the array to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
