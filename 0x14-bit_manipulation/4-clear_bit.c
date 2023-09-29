#include "main.h"

/**
 * clear_bit - a function that sets a bit to 0
 *
 * @n: the number
 * @index: the index
 * Return: 1 if success
 * -1 if an error occured
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int pow;

	if ((index >= sizeof(unsigned long int) * 8) | !n)
		return (-1);

	mask = (*n >> index);

	if ((mask & 1) == 0)
		return (1);
	else if ((mask & 1) == 1)
	{
		pow = 1 << index;
		*n = *n - pow;
		return (1);
	}
	else
	{
		return (-1);
	}
}
