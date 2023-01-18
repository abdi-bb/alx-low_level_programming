#include "function_pointers"

/**
 * array_iterator - Execute function on each element of an array.
 * @array: Given array.
 * @size: Size of the array.
 * @action: Pointer to a function.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		action(array[i]);
	}
}

