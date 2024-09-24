#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to an array
 * @n: how many elements to print
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i = 0, j = 0, len = 0;

	while (i < n)
	{
		len += 1;
		i++;
	}
	while (j < n)
	{
		printf("%d", a[j]);

		if (j + 1 != len)
			printf(", ");
		j++;
	}
	printf("\n");
}
