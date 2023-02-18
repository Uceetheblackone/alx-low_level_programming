#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	if (a < 9)
	{
		putchar(',');
		putcharr(' ');
	}
	}
	putchar('\n');
	return (0);
}
