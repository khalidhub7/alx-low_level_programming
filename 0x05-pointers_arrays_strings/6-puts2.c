#include "main.h"
/**
 * puts2 - print Every Other Character
 * @str: str to print
 * Return: Always 0
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		len += 1;
		i++;
	}
	for (i = 0; i < len; i++)
	{
		if (i == 0 || i % 2 == 0)
			_putchar(str[i]);
	}
	if (len > 0)
		_putchar('\n');
}
