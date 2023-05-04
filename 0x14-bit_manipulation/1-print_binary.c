#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: decimal number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag;
	unsigned long int x;

	flag = 0;

	for (i = 63; i >= 0; i--;)
	{
		x = n >> i;
		if (n & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (!flag)
		_putchar('0');

	_putchar('\n');
}
