#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


