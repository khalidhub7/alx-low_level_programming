#include "main.h"

/**
 * times_table -  prints table
 *
 * Return: Always 0 (Success)
 * Description: prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int a, b, result;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			result = a * b;
			if (result < 10)
				_putchar(' ');
			if (result < 10)
				_putchar(result + '0');
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
