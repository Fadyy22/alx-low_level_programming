#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * 
 * Return: void
 */
 void jack_bauer(void)
{
	int i,j,k,l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 51; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_puthcar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
