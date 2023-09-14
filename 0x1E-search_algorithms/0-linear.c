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
