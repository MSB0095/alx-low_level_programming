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
	j = 0;
	for (i = 0;i < lendest;i++)
	{
		while(j <= lensrc)
		{
			dest[i] = src[j];
			j++;
		}
	}
	dest[lendest] = '\0';
	return (dest);
}

