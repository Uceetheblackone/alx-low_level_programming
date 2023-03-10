#include "main.h"

/**
 * factorial - writes a function that returns the factorial of a given number.
 * @n: input value.
 *
 * Return: -1 when n < 0, 0 when n > 0 and 1 when n = 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
