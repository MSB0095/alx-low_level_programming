#include "main.h"
/**
 * clear_bit - sets the bit to 0 at index
 * @n: the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(n) * 8)
		return (-1);
	mask = 1UL << index;
	*n = *n & ~mask;
	return (1);
}
