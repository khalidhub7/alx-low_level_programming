#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first str
 * @src: second str
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
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
		add[i] = src[j];
		i++;
		j++;
	}
	add[i] = '\0';
	strcpy(dest, add);
	return (add);
}
