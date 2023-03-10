#include "main.h"

/**
 * _print_rev_recursion - function to print the reverse of the string
 * @s: input value
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
