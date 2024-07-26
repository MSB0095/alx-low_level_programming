#include "main.h"

/**
 * get_bit - gets the bit at index
 * @n: the number
 * @index: the index
 *
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;
	if (index > sizeof(n) * 8)
		return (-1);
	if (n & mask)
		return (1);
	else
		return (0);
}
