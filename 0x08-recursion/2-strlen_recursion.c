#include "main.h"

/**
 *_stren_recursion - Returns the length of a string.
 *@s: input value.
 *
 *Return: The length of the string.
 */
int _stren_recursion(char *s)
{
	int l;

	l = 0;

	if (*s)
	{
		l++;
		l = l + _stren_recursion(s + 1);
	}
	return (l);
}
