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
	if ((_islower(c)) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
