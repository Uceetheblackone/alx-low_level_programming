#include "main.h"

/**
* get_endianness - function that checks the endiannes.
*
* Return: if big endian return 0, if small endian 1.
*/
int get_endianness(void)
{
	unsigned int a = 1;
	char *b = (char *)&a;

	return (*b);
}
