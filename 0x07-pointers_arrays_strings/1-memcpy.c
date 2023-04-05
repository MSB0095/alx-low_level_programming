#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++
	}
	return (dest);
}
