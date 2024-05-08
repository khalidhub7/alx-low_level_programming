#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array using recursion
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index of the value in the array, or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    printf("Searching in array: ");
    printarr(array, 0, size - 1);
    size_t mid = size / 2;

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return mid;
    }

    if (array[mid] < value)
    {
        int result = advanced_binary(array + mid + 1, size - mid - 1, value);
        return (result == -1) ? -1 : mid + 1 + result;
    }

    return advanced_binary(array, mid, value);
}

void printarr(int *array, size_t start, size_t end)
{
    size_t i;

    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i != end)
            printf(", ");
    }
    printf("\n");
}

