#include "main.h"

/**
 * times_table -  prints table
 *
 * Return: Always 0 (Success)
 * Description: prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j, darb;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			darb = i * j;
			if (j == 0)
			{
				_putchar(48);
			}
			else if (j != 0 && darb < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(darb + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((darb / 10) + 48);
				_putchar((darb % 10) + 48);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
