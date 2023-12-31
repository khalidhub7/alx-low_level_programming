#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int i = 0;

	do{
		_putchar(i + 48);
	} while (i >= 0 && 9 >= i);
	_putchar('\n');
}
