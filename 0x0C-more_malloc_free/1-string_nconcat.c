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
	int j = 0, i = 0;
	char *con = malloc(sizeof(s1) + n - 1);

	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0' && j <= n)
	{
		con[i] = s2[j];
		i++;
		j++;
	}
	con[i] = '\0';

	if (con != NULL)
	{
		return (con);
	}
	else if (con == NULL)
	{
		return (NULL);
	}
}
