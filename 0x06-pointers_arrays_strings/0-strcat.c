#include "main.h"

/**
 * *_strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: *dest
 */

char _strcat(char *dest, char *src)
{
	char *str;
	str = strcat(dest, src);
	return(str);
}
