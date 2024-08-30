#include "main.h"

/**
 * jack_bauer -  every minute
 *
 * Return: Always 0 (Success)
 * Description: prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; (a < 2 && b < 10) || (a >= 2 && b < 4); b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + 48);
					_putchar(b + 48);
					_putchar(':');
					_putchar(c + 48);
					_putchar(d + 48);
					_putchar('\n');
				}
			}
		}
	}
}
