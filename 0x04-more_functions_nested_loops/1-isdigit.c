#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: arg to check
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

