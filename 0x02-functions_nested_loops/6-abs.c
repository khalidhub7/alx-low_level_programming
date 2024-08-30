#include "main.h"
#include <stdio.h>
/**
 * _abs -  absolute value
 *
 * Return: Always 0 (Success)
 * Description: computes the absolute value of an int
 * @n: arg to check
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	return (-n);
}
