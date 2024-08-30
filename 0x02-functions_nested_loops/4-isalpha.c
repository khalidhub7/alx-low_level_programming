#include "main.h"

/**
 * _isalpha - is alphabetic character
 *
 * Return: Always 0 (Success)
 * Description: checks for alphabetic character.
 * @c: arg to check
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
