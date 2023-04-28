#include <stdio.h>

/**
 * print - prints a statement before
 * main is executed
 *
 * Return: void
 */
__attribute__ ((constructor))
void print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
