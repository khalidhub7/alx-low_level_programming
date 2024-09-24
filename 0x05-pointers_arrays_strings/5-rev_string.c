#include "main.h"
/**
 * rev_string - reverses a string
 * @s: str to print
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i = 0, j = 0, a = 0, len = 0, first_len = 0, c = 0;
	char new[500];

	while (s[i] != '\0')
	{
		len += 1;
		i++;
	}
	first_len = len;
	while (len > 0)
	{
		new[j] = s[len - 1];
		len--;
		j++;
	}
	new[j] = '\0';

	while (a < first_len && s[c] != '\0')
	{
		s[c] = new[c];
		c++;
	}
}
