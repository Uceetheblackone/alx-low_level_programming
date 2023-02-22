#include "main.h"
/**
 * _isalpha - to check if char is an alphabet
 *
 * @c: is the char to be checked
 *
 * Return: 1 if char is an alphabet
 * otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
