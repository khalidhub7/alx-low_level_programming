#include "main.h"

/**
 * print_alphabet - alphabet
 *
 * Return: Always 0 (Success)
 * Description: prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
