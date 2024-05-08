#include "search_algos.h"

/**
 * linear_search - linear     shearch
 * @array: list
 * @size: size OF _list
 * @value: the value to find
 * Return: the index if success -1 when failed
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i++;
	}
	return (-1);
}
