#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;

	printf("%d", argc);
	printf("\n");

	return (0);
}
