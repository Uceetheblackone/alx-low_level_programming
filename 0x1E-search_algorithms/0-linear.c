#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of
 * integers using the Linear search algorithm.
 * @array:  array to search in.
 * @size:  length of the array.
 * @value: value to look for.
 *
 * Return: first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	for (index = 0; (index < size) && (array); index++)
	{
		if (*(array + index) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)index, *(array + index));
			return (index);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)index, *(array + index));
		}
	}
	return (-1);
}
