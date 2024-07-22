#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 * Return: the converted number, or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int len;
	int i;
	unsigned int exp;

	if (!b)
	{
		return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
		;
	exp = 1;
	num = 0;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			num = num + exp;
			exp = exp * 2;
		}
		else if (b[i] == '0')
		{
			exp = exp * 2;
			continue;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
