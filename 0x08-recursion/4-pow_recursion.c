#include "main.h"

/**
 * _pow_recursion - writes a function that returns
 * the value of a number raised to the power of anothe number.
 * @x: input value.
 * @y: input value.
 *
 * Return: result of the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

