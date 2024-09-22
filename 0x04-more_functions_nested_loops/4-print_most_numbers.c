#include "main.h"
/**
 * print_most_numbers -  print nums except 2, 4
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}

