#include "./main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: the binary number to convert
 * Return: the converted number, or 0 if b is NULL or contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int l = _strlen(b);
	int p = 1;

	if (!b)
	{
		return (0);
	}
	else
	{
		while (l > 0)
		{
			if (b[l - 1] == '1' || b[l - 1] == '0')
			{
				if (b[l - 1] == '1')
				{
					n = n + p;
				}
				p = p * 2;
				l--;
			}
			else
			{
				return (0);
			}
		}
		return (n);
	}
}
