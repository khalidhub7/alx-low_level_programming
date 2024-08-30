#include "main.h"

/**
 * _islower - lowercase
 *
 * Return: Always 0 (Success)
 * Description: checks for lowercase character
 * @c: arg to check
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
