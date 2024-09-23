#include "main.h"
/**
 * print_number - prints an integer
 * @n: num to print
 * Return: Always 0
 */
void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		print_number(47483648);
		return;
	}
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	/* Recursion: add num to stack, prints digits in reverse order */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + 48);
}

