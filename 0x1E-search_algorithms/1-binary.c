#include "search_algos.h"
/**
 * printarr - print listtt
 * @array: llist
 * @start: start of list
 * @end: end of listt
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
 * @array: llist
 * @start: start of list
 * @end: end of lisst
 * @value: value to fiind
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
 * binary_search - shearch (dictionary technic)
 * @array: list
 * @size: size of lissst
 * @value: value to find
 * Return: the index if success -1 when failed
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (binary_help(array, value, 0, size - 1));
}
