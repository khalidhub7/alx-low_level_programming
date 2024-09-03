#include "main.h"

/**
 * all_natural - sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
void all_natural(void)
{
	int i;
	int result = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
}

