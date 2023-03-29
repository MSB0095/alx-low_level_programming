#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int a, b, len;
	
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	char t[len];
	
	for (a = len - 1; a >=0; a--)
	{
		for (b = 0; b <= len; b++)
		{
			t[b] = s[a];
		}
	}

	for (b = 0; b <= len; b++)
	{
		s[b] = t[b];
	}
}
