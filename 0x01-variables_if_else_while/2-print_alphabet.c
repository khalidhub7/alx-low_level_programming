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
	int first = 97;
	int last = 123;

	while (first < last)
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}

