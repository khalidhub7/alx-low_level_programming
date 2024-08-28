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
	int min = 96;
	int max = 122;

	while (min < max)
	{
		putchar(max);
		max--;
	}
	putchar('\n');

	return (0);
}
