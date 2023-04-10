#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number whose binary is printed.
 * Return: Returns void when successful.
 */
void print_binary(unsigned long int n)
{
	int i, num_times = 0;
	unsigned long int binary_num;

	for (i = 63; i >= 0; i--)
	{
		binary_num = n >> i;
		if (binary_num & n)
		{
			_putchar('1');
			num_times++;
		}
		else if (num_times || !num_times)
		{
			_putchar('0');
		}

	}
	_putchar('\n');
}
