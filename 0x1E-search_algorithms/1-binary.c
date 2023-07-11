#include "search_algos.h"
#include <math.h>

/**
 * binary_search - Searches a value using a binary search algorithm
 * @array: A pointer to the first element of the array to to search in
 * @size: Number of elements in array
 * @value: The value to search for
 *
 * Return: Index where value is located or
 *	-1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
