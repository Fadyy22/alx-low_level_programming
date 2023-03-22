#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	long int sum;

	n = 1024;
	sum = 0;

	while (n != 0)
	{
		n--;
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	return (0);
}
