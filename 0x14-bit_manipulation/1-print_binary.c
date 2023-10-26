#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: num to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int u = sizeof(n) * 8;
	int x = 0;

	while (u)
	{
		if (n & 1L << --u)
		{
			_putchar('1');
			x++;
		}
		else if (x)
			_putchar('0');
	}
	if (!x)
		_putchar('0');
}
