#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	int fir = 'A';
	int sec = 'Z';

	if (c >= fir && sec >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
