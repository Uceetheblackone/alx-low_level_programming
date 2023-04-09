#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: pointer to the output value.
 * @index: index of the bit
 * Return: returns 1 (sucess) or -1 (fails).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1UL << index);
	}
	return (1);
}
