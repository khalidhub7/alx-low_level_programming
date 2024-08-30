#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 57; b++)
		{
			for (c = 49; c < 58; c++)
			{
				if (b > a && b < c && a != b && b != c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a == 55 && b == 56 && c == 57)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

