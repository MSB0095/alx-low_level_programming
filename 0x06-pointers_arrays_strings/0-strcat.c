#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int lensrc, i, j, lendest, len;

	lendest = strlen(dest);
	lensrc = strlen(src);
	len = lensrc + lendest - 2;
	i = lendest - 1;
	j = 0;
	for (i < len;i++)
	{
		while(j <= lensrc)
		{
			dest[i] = src[j];
			j++;
		}
	}
	dest[len] = '\0';
	return (dest);
}

