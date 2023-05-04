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
	int flag;
	unsigned int x;

	flag = 0;
	x = 1 << 63;

	while (x > 0)
	{
		if (n & x)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
		x = x >> 1;
	}

	if (!flag)
		_putchar('0');

	_putchar('\n');
}
