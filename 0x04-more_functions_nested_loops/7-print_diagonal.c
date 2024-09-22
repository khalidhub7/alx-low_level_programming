#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: length(line)
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
