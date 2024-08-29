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
	int alpha = 97;
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (alpha < 103)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
