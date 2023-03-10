#include "main.h"

/**
 * actual_sqrt_recursion -recurses to find
 * the natural square root of a number.
 * @n: input value
 * @i:iterator.
 *
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - write a function that returns
 *  the natural square root of a number.
 *  @n: input value.
 *
 *  Return: square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
