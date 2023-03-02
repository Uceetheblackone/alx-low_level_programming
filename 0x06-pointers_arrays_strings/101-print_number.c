#include "main.h"

/**
 * print_number - Prints numbers char
 * @b: integer parameter
 *
 * Return: 0
 */
void print_number(int b)
{
	unsigned int b1;

	b1 = b;

	if (b < 0)
	{
		_putchar('-');
		b1 = -b;
	}
	if (b1 / 10 != 0)
	{
		print_number(b1 / 10);
	}
	_putchar ((b1 % 10) + '0');
}
