
#include "search_algos.h"
/**
 * printarr - print list
 * @array: list
 * @start: start of list
 * @end: start of list
 */
void printarr(int *array, size_t start, size_t end)
{
	size_t i = start;

	if (start > end)
		return;
	printf("Searching in array: ");
	while (i <= end)
	{
		if (i != start)
			printf(", ");
		printf("%d", array[i++]);
	}
	printf("\n");
}

/**
 * binary_help - shearch ( dictionary technic)
 * @array: list
 * @start: start of list
 * @end: start of list
 * @value: value to find
 * Return: the index if success -1 when failed
 */
size_t binary_help(int *array, int value, size_t start, size_t end)
{
	size_t i = (start + end) / 2;

	printarr(array, start, end);
	if (start > end)
		return (-1);
	if (array[i] == value)
	{
		return (i);
	}
	if (array[i] > value)
		return (binary_help(array, value, start, i - 1));
	return (binary_help(array, value, i + 1, end));
}

/**
 * exponential_search - shearch ( dictionary technic)
 * @array: list
 * @size: list size
 * @value: value to find
 * Return: the index if success -1 when failed
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, m;

	if (!array)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	m = i;
	if (i >= size)
	{
		m = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, m);
	return (binary_help(array, value, i / 2, m));
}

