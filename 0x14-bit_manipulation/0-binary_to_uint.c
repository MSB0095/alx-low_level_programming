#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: the string
 * Return: the lenght of a string
*/

unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: the binary number to convert
 * Return: the converted number, or 0 if b is NULL or contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int l = _strlen(b);
	unsigned int p = 1;

	if (b[0] == '\0' || b == NULL)
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
			else if (b[l - 1] != '1' || b[l - 1] != '0')
			{
				return (0);
			}
		}
		return (n);
	}
}
