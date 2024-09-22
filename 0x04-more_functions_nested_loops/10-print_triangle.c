#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i < size + 1; i++)
		{
			h = size - i;
			while (h != 0)
			{
				_putchar(' ');
				h--;
			}
			h = size - i;
			while (h != size)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
		}
	}
}
