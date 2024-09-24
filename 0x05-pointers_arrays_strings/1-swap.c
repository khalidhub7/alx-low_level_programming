#include "main.h"
/**
 * swap_int - swaps the value
 * @a: first num
 * @b: second num
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int value_a = *a;

	*a = *b;
	*b = value_a;
}
