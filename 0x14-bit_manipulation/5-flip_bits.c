#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits
 * you would neeed to flipp to get form one number to another.
 * @n: first output value.
 * @m: second output value
 * Return:Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_of_bits = 0;
	unsigned long int num = n ^ m;

	while (num != 0)
	{
		num_of_bits += (num & 1); 
		num >>= 1;
	}
	return (num_of_bits);
}
