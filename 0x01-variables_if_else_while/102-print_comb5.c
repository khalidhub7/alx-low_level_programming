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
	int a = 48;
	int b, c, d;
	int first = 1;

	while (a <= 57)
	{
		b = a;
		while (b <= 57)
		{
			c = a;
			while (c <= 57)
			{
				d = (c == a) ? (b + 1) : a;
				while (d <= 57)
				{
					if (!first)
					{
						putchar(',');
						putchar(' ');
					}
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					first = 0;
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
