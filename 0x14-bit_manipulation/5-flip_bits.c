#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 *  need to flip to get from one number to another
 * @n: the first num
 * @m: the second num
 * Return: the number of flips required
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int flips = 0;

	while (xor != 0)
	{
		if (xor & 1)
			flips++;
		xor = xor >> 1;
	}
	return (flips);
}
