#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts binary numbers to unsigned int.
 * @b: Pointer to the string of binary characters.
 *
 * Return: The converted number when successful
 * and 0 when characters in string is not 0 or 1 and when b is null.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted_num = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		converted_num = ((2 * converted_num) + (b[i] - '0'));
	}
	return (converted_num);
}

