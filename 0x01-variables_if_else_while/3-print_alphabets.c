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
	int min = 97;
	int maj = 65;

	while (min < 123)
	{
		putchar(min);
		min++;
	}
	while (maj < 91)
	{
		putchar(maj);
		maj++;
	}
	putchar('\n');
	return (0);
}
