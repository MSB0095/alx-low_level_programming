#include "main.h"

/**
 * binary_to_uint - a function that 
 * converts a binary number to an unsigned int
 * @b: a pointer to a string of 0 and 1
 * Return: the converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int len = 0;
	unsigned int result = 0;
	int exponent = 1;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			exponent = exponent * 2;
			continue;
		}

		else if (b[i] == '1')
		{
			result = result + exponent;
			exponent = exponent * 2;
		}
		else
		{
			return (0);
		}
	}
	return(result);
}
