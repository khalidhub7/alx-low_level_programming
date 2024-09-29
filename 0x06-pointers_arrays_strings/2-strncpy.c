#include "main.h"

/**
 * _strncpy - copies up to n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	static char full[200];
	char *add = full;
	int i = 0, j = 0, k = 0;
	int x = 0, y = 0, len_dest = 0, len_src = 0;

	while (dest[x] != '\0')
	{
		len_dest += 1;
		x++;
	}
	while (src[y] != '\0')
	{
		len_src += 1;
		y++;
	}

	while (k < 200)
	{
		add[k] = '\0';
		k++;
	}
	while (i <= len_dest)
	{
		add[i] = dest[i];
		i++;
	}
	while (j <= len_src)
	{
		if (j < n)
			add[j] = src[j];
		j++;
	}
	strcpy(dest, add);
	return (add);
}
