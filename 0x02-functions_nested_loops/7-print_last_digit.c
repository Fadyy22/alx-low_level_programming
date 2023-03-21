#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * @n: Number to print its last digit
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		return (n % 10);
	}
	else
	{
		return ((n * -1) % 10);
	}
}
