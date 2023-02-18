#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	int d;

	c = 'a';

	while
		(d < 10)
		{
			putchar(48 + d);
			d++; }
	while
		(c <= 'f')
		{
			putchar(c);
			c++; }
	putchar('\n');
	return (0);
}
