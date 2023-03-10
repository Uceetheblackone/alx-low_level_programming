#include "main.h"

/**
 *_strlen_recursion - Returns the length of a string.
 *@s: input value.
 *
 *Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (*s)
	{
		l++;
		l = l + _strlen_recursion(s + 1);
	}
	return (l);
}
