#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all numbers from n to 98
 *
 * @n: Input to start from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (1 < 2)
	{
		if (n == 98)
		{
			printf("%d", n);
			putchar('\n');
			break;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else
		{
			printf("%d, ", n);
			n++;
		}
	}
}
