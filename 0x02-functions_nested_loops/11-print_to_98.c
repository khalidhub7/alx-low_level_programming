#include "main.h"

/**
 * print_to_98 - from n to 98
 *
 * Return: Always 0 (Success)
 * Description: prints all natural numbers from n to 98
 * @n: arg to check
 */
void print_to_98(int n)
{
	int i, result = 0;

	if (n == 0)
	{
		for (i = 0; i < 99; i++)
		{
			if (result < 10)
			{
				_putchar(result + 48);
			}
			else if (result >= 10)
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
			if (result != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			result++;
		}
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n > 97)
		{
			if (n < 100)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((n / 100) + 48);
				_putchar(((n / 10) % 10) + 48);
				_putchar((n % 10) + 48);
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
	else if (n < 98 && n > 0)
	{
		while (n != 99)
		{
			if (n)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n < 98 && n < 0)
	{
		while (n != 99)
		{
			if (n < 0)
			{
				if ((n / 10) != 0)
				{
					n = -n;
					_putchar('-');
					_putchar((n / 10) + 48);
					_putchar((n % 10) + 48);
					n = -n;
				}
				else
				{
					n = -n;
					_putchar('-');
					_putchar((n % 10) + 48);
					n = -n;
				}
			}
			else
			{
				if ((n / 10) != 0)
				{
					_putchar((n / 10) + 48);
					_putchar((n % 10) + 48);
				}
				else
				{
					_putchar((n % 10) + 48);
				}
			}

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}
