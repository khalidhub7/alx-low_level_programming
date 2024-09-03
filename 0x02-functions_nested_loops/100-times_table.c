#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: arg to check
 *
 * Return: Always 0 (Success)
 * Description: prints the n times table, starting with 0
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 0 && n < 16)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar(result + 48);
				}
				else if (j != 0 && result < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + 48);
				}
				else if (j != 0 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar((result / 100) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}

