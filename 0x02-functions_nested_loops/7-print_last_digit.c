#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Number to print its last digit
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{	n = n % 10;
		_putchar(n + 48);
	}
	else
	{
		n = (n * -1) % 10;
		_putchar(n + 48);
	}
	return (0);
}
