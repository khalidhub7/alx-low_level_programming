#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first str
 * @src: second str
 * @n: num of bytes
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	static char full[200];
	char *add = full;
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		add[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		if (j < n)
			add[i] = src[j];
		i++;
		j++;
	}
	add[i] = '\0';
	strcpy(dest, add);
	return (add);
}
