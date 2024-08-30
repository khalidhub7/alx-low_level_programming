#include "main.h"

/**
 * print_sign -  sign
 *
 * Return: Always 0 (Success)
 * Description: prints the sign of a number
 * @n: num to check
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
