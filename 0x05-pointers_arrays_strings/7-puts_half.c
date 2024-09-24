#include "main.h"
/**
 * puts_half - print half of a string
 * @str: str to print
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len = 0, i = 0, j = 0;

	while (str[i] != '\0')
	{
		len += 1;
		i++;
	}
	if ((len % 2) != 0)
		len = (len - 1) / 2;
	else if ((len % 2) == 0)
		len = len / 2;
	while (str[j] != '\0')
	{
		if (j >= len + 1)
			_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
