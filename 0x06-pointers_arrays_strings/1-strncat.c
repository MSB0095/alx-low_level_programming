#include "main.h"

/**
 * *_strncat - concatenate 2 strings with maximum src bytes
 * @dest: destination
 * @src: src
 * @n: max
 * Return: *dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i,j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j <= n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
