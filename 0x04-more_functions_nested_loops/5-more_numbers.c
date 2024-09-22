#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				_putchar(49);
			}
			_putchar(j % 10 + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
