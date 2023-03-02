#include "main.h"

/**
 * _strncat - Concatenates two strings using an
 * imputted number of bytes from src
 * @dest: The string to be appended upon
 * @src: The strin to be appended to dest
 * @n: The number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
		for (j = 0; j < n && src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	return (dest);
}
