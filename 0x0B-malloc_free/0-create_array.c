#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -create array of size and assign char c.
 * @size: size of array.
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	unsigned int b;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
