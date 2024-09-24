#include "main.h"
/**
 * _strlen - len of str
 * @s: str to check
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0, len = 0;

	while (s[i] != '\0')
	{
		len += 1;
		i++;
	}
	return (len);
}
