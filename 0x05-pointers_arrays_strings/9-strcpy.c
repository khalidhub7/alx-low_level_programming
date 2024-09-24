#include "main.h"
/**
 * _strcpy -  copies the string src to dest
 * @dest: str to copy
 * @src: str to paste
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
