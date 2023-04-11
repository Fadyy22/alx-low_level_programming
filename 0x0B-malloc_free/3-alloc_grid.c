#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers,
 * NULL on failure
 * or if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **d, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	d = malloc(sizeof(int *) * height);

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		d[i] = malloc(sizeof(int) * width);
		if (d[i] == NULL)
		{
			free(d);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d[i][j] = 0;
		}
	}

	return (d);
}
