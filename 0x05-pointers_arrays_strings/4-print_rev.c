#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string
 */

void print_rev(char*s)
{
	int a, b, len;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	len = a;

	for (b = len - 1; b >= 0; b--)
	{
		putchar(s[b]);
	}

	putchar('\n');
}

