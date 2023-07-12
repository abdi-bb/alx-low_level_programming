#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where value is located, or -1 if value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size - 1 ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		print_array(array, low, high);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints the elements of an array within a given range.
 * @array: Pointer to the first element of the array
 * @start: The starting index of the range
 * @end: The ending index of the range
 */
void print_array(int *array, size_t start, size_t end)
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
