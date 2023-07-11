#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elentes in array
 * @value: The value to search for
 *
 * Return: The first index where value is located or
 *	-1 if value not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
