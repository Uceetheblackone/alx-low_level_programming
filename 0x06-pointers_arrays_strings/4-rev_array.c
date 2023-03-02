#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers
 *@a: array of integers
 *@n: number of element in array
 */
void reverse_array(int *a, int n)
{
	int l;
	int m;

	for (l = 0; l < n--; l++)
	{
		m = a[l];
		a[l] = a[n];
		a[n] = m;
	}
}
