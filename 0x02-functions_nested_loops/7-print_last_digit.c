#include "main.h"

/**
 * print_last_digit -  last digit
 *
 * Return: Always 0 (Success)
 * Description: prints the last digit of a number
 * @n: arg to check
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (n * -1) % 10;
		_putchar(last + '0');
		return (last);
	}
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
