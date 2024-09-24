#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: str to print
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len += 1;
		i++;
	}
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
