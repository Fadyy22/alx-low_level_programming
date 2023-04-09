#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	argc--;

	for (i = 0; i <= argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
