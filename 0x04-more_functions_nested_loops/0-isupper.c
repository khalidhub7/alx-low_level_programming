#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: arg to check
 * Return: 1 if c is uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
