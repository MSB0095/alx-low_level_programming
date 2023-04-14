#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from string 2
 *
 * Return: pointer to allocated memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0; j = 0, len1 = 0,len2 = 0;
	char *s;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len1] != '\0')
		len2++;

	if (n >= len2)
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	else if (n<len2)
		s = malloc(sizeof(char) * (len1 + n + 1));

	if (!s)
		return (NULL);

	while (i < len1)
		s[i] = s1[i];
		i++;
	while (n < len2 && i < (len1 + n))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len2 && i < (len1 + len2))
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
