#include "search_algos.h"

/**
 * jump_search - shearch (dictionary technic)
 * @array: list
 * @size: list size
 * @value: value to find
 * Return: the index if success -1 when failed
 */
int jump_search(int *array, size_t size, int value)
{
	size_t m = (size_t)sqrt(size), i = 0;

	if (!array)
		return (-1);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += m;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - m, i);
	i -= m;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
