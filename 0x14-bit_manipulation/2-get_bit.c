#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @index: the index
 * @n: output value
 * Return: returns value of the bit at index, or -1 when an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	value_of_bit = (n >> index) & 1;
	return (value_of_bit);
}
