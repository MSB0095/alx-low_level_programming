#include "main.h"

/**
 * _strlen - returns lenght of a string
 * @s: the string
 * Return: the lenght of a string
*/

unsigned int _strlen(const char *s)
{
	unsigned int i;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: the binary number to convert
 * Return: the converted number, or 0 if b is NULL or contains chars not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result, tmp, expo;

	if (!b)
		return (0);
	result = tmp = 0;
	expo = 1;
	for (i = _strlen(b) - 1; b[i]; i--, expo *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		tmp = _stoi(b[i]);
		result += tmp * expo;
	}
	return (result);
}
