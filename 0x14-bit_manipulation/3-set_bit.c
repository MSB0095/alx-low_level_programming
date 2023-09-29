#include "main.h"

/**
 * get_bit - a function that returns
 *  the value of a bit at a given index.
 * @n: the number
 * @index: the index
 * Return: the value of the bit
 * at index index or -1 if an error occured
*/

int set_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = n >> index;

	if (mask & 1 == 1)
		return (1);
	else if (mask & 1 == 0)
		n = n + 

}
