#include "search_algos.h"

/**
* linear_search - that searches for a value in an array of
* integers using the Linear search algorithm
* @array: pointer to the first value of the array to search in
* @size: number of elements in array
* @value: value to search
*
* Return: the first index where value is located,
* -1 if array is NULL or value not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (size == 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
