#include "main.h"

/**
 * *_strncpy - copies a string to a destination
 * @dest: destination
 * @src: source
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i,j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		dest[i] = src[i]
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
